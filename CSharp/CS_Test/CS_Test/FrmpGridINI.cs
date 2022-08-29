using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace CS_Test
{

    public partial class FrmpGridINI : Form
    {
        INI iniFile = new INI("D:\\Config.ini");
        
        public FrmpGridINI()
        {
            InitializeComponent();
            DefaultConfig();
        }

        public void DefaultConfig()
        {
            ConfigParam configSave = new ConfigParam();

            configSave.Addr = "192.168.0.1";
            configSave.PortNum = 5000;

            pGrid_Save.SelectedObject = configSave;
        }

        private void Btn_Save_Click(object sender, EventArgs e)
        {
            SaveINI_File();
        }

        private void SaveINI_File()
        {
            object obj = pGrid_Save.SelectedObject;

            ConfigParam Config_save = (ConfigParam)obj;

            iniFile.SaveINIFile(Config_save);
        }

        private void Btn_Load_Click(object sender, EventArgs e)
        {
            LoadINI_File();
        }

        private void LoadINI_File()
        {
            object obj = pGrid_Load.SelectedObject;
            ConfigParam Config_load = (ConfigParam)obj;

            Config_load = iniFile.LoadINIFile();

            pGrid_Load.SelectedObject = Config_load;
        }
        
    }

    /*
     * PropertyGrid 개념 
     * Category를 지정하고 지정된 Category에 속하는 속성명과 속성의 Type을 지정하는 하나의 class를 만든다.
     * PropertyGrid의 SelectedObject에 class의 인스턴스를 할당
     */
    [DefaultPropertyAttribute("Name")]
    public class ConfigParam
    {
        /*
         * _addr, _PortNum이라는 변수들은 Property에 하나하나에 매칭
         * 그러나 private이므로 PropertyGrid는 변수들을 읽을수도 변경할 수도 없다.
         * 그래서 Property 지시자로 PropertyGrid와 연결하고 Property를 만든다.
         */
        private string _Addr;
        private int _PortNum;

        public ConfigParam() { }
        
        /*
         * private으로 선언한 변수들을 Property화 시켜 외부와의 통신을 위한 public 처리를 했다.
         * 각각의 Category별로 분류를 해야하기 위해 Attribute 기법을 쓴다.
         * Attribute 기법
         * '[ ]'를 통해 지정되며 클래스나 property 등에 특정한 특성을 지정하도록 하는 것 
         * Category 별로 Property를 분류하기 위한 Attribute의 지시자는 CategoryAttribute 이다.
         */
        [CategoryAttribute("Test Settings"),
         DescriptionAttribute("Setting for Test")]
        public string Addr
        {
            get { return _Addr; }
            set { _Addr = value; }
        }

        [CategoryAttribute("Test Settings"),
         DescriptionAttribute("Setting for Test")]
        public int PortNum
        {
            get { return _PortNum; }
            set { _PortNum = value; }
        }
    }


}
