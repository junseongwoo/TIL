﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace MoviePlayerApp
{
    public partial class FrmPlayer : Form
    {
        public FrmPlayer()
        {
            InitializeComponent();
        }

        private void BtnFileSelect_Click(object sender, EventArgs e)
        {
            if(DlgSelectFile.ShowDialog() == DialogResult.OK)
            {
                MyPlayer.URL = DlgSelectFile.FileName;
            }
        }

        private void FrmPlayer_Load(object sender, EventArgs e)
        {
            MyPlayer.stretchToFit = true; // 피처박스 줌한거랑 동일한 효과
        }
    }
}
