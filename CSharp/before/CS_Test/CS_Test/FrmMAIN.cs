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
    public partial class FrmMAIN : Form
    {
        public FrmpGridINI frmpGridINI = null;
        public FrmListViewTXT frmLstViewTXT = null;
        public FrmLogTest frmLogTest = null;
            
        public FrmMAIN()
        {
            InitializeComponent();

            frmpGridINI = new FrmpGridINI();
            frmLstViewTXT = new FrmListViewTXT();
            frmLogTest = new FrmLogTest();

            frmLstViewTXT.Owner = this;
            frmpGridINI.Owner = this;
            frmLogTest.Owner = this;

        }

        private void FrmMAIN_Load(object sender, EventArgs e)
        {
            frmpGridINI.TopLevel = false;
            frmLstViewTXT.TopLevel = false;
            frmLogTest.TopLevel = false;

            this.Controls.Add(frmpGridINI);
            this.Controls.Add(frmLstViewTXT);
            this.Controls.Add(frmLogTest);

            frmpGridINI.StartPosition = FormStartPosition.Manual;
            frmpGridINI.Location = new Point(15, 60);
            frmLstViewTXT.StartPosition = FormStartPosition.Manual;
            frmLstViewTXT.Location = new Point(15, 60);
            frmLogTest.StartPosition = FormStartPosition.Manual;
            frmLogTest.Location = new Point(15, 60);
        }

        private void Btn_pGridForm_Click(object sender, EventArgs e)
        {
            frmpGridINI.Show();
            frmLstViewTXT.Hide();
            frmLogTest.Hide();
        }

        private void Btn_lstViewFrm_Click(object sender, EventArgs e)
        {
            frmpGridINI.Hide();
            frmLstViewTXT.Show();
            frmLogTest.Hide();
        }

        private void Btn_LogTest_Click(object sender, EventArgs e)
        {
            frmpGridINI.Hide();
            frmLstViewTXT.Hide();
            frmLogTest.Show();
        }

        private void Btn_Delegate_Click(object sender, EventArgs e)
        {

        }
    }
}
