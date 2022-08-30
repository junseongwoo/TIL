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
    public partial class FrmListViewTXT : Form
    {
        public FrmListViewTXT()
        {
            InitializeComponent();
        }

        private void FrmListViewTXT_Load(object sender, EventArgs e)
        {
            UpdateLstLog();
        }

        public void UpdateLstSearch()
        {
            lst_Search.View = View.Details;
        }

        public void UpdateLstLog()
        {
            lst_Log.BeginUpdate();

            //ch_Date.Width = lst_Log.Width / 5;
            //ch_Judge.Width = lst_Log.Width / 6;
            //ch_Log.Width = lst_Log.Width - (lst_Log.Width / 5 + lst_Log.Width / 6);

            lst_Log.Columns.Add("Date", lst_Log.Width / 5);
            lst_Log.Columns.Add("Judge", lst_Log.Width / 6, HorizontalAlignment.Center);
            lst_Log.Columns.Add("Log", lst_Log.Width - (lst_Log.Width / 5 + lst_Log.Width/6));

            lst_Log.EndUpdate();
        }

        private void Btn_Save_Click(object sender, EventArgs e)
        {

        }

        private void Btn_Search_Click(object sender, EventArgs e)
        {

        }

        public void SetLog(string judge, string caption)
        {
            lst_Log.BeginUpdate();
            
            {
                string curTime = DateTime.Now.ToString("yyyy-mm-dd HH:mm:ss");

                ListViewItem item = new ListViewItem(curTime);
                item.SubItems.Add(judge);
                item.SubItems.Add(caption);

                lst_Log.Items.Add(item);
            }

            lst_Log.EndUpdate();

        }


    }
}
