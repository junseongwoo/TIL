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
    public partial class FrmLogTest : Form
    {
        FrmListViewTXT frmListViewTXT = new FrmListViewTXT();

        public FrmLogTest()
        {
            InitializeComponent();
        }

        private void FrmLogTest_Load(object sender, EventArgs e)
        {
            DefaultCbo();
        }

        private void DefaultCbo()
        {
            Cbo_Judge.Items.Add("OK");
            Cbo_Judge.Items.Add("NG");
        }

        private void Btn_Save_Click(object sender, EventArgs e)
        {
            //frmListViewTXT.SetLog(Cbo_Judge.SelectedItem.ToString(), Tbo_Log.Text.ToString());
            frmListViewTXT.SetLog("dddd", "eeee");
        }

       
    }
}
