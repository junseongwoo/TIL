namespace CS_Test
{
    partial class FrmListViewTXT
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.lst_Search = new System.Windows.Forms.ListView();
            this.Btn_Search = new System.Windows.Forms.Button();
            this.Btn_Lst_Save = new System.Windows.Forms.Button();
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.dateTimePicker2 = new System.Windows.Forms.DateTimePicker();
            this.lst_Log = new System.Windows.Forms.ListView();
            this.SuspendLayout();
            // 
            // lst_Search
            // 
            this.lst_Search.GridLines = true;
            this.lst_Search.HideSelection = false;
            this.lst_Search.Location = new System.Drawing.Point(26, 101);
            this.lst_Search.Name = "lst_Search";
            this.lst_Search.Size = new System.Drawing.Size(344, 337);
            this.lst_Search.TabIndex = 0;
            this.lst_Search.UseCompatibleStateImageBehavior = false;
            this.lst_Search.View = System.Windows.Forms.View.Details;
            // 
            // Btn_Search
            // 
            this.Btn_Search.Location = new System.Drawing.Point(387, 47);
            this.Btn_Search.Name = "Btn_Search";
            this.Btn_Search.Size = new System.Drawing.Size(141, 37);
            this.Btn_Search.TabIndex = 1;
            this.Btn_Search.Text = "Search";
            this.Btn_Search.UseVisualStyleBackColor = true;
            this.Btn_Search.Click += new System.EventHandler(this.Btn_Search_Click);
            // 
            // Btn_Lst_Save
            // 
            this.Btn_Lst_Save.Location = new System.Drawing.Point(635, 47);
            this.Btn_Lst_Save.Name = "Btn_Lst_Save";
            this.Btn_Lst_Save.Size = new System.Drawing.Size(141, 37);
            this.Btn_Lst_Save.TabIndex = 2;
            this.Btn_Lst_Save.Text = "Save";
            this.Btn_Lst_Save.UseVisualStyleBackColor = true;
            this.Btn_Lst_Save.Click += new System.EventHandler(this.Btn_Save_Click);
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.Location = new System.Drawing.Point(26, 53);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(164, 21);
            this.dateTimePicker1.TabIndex = 3;
            // 
            // dateTimePicker2
            // 
            this.dateTimePicker2.Location = new System.Drawing.Point(213, 53);
            this.dateTimePicker2.Name = "dateTimePicker2";
            this.dateTimePicker2.Size = new System.Drawing.Size(157, 21);
            this.dateTimePicker2.TabIndex = 4;
            // 
            // lst_Log
            // 
            this.lst_Log.GridLines = true;
            this.lst_Log.HideSelection = false;
            this.lst_Log.Location = new System.Drawing.Point(435, 101);
            this.lst_Log.Name = "lst_Log";
            this.lst_Log.Scrollable = false;
            this.lst_Log.Size = new System.Drawing.Size(341, 337);
            this.lst_Log.TabIndex = 5;
            this.lst_Log.UseCompatibleStateImageBehavior = false;
            this.lst_Log.View = System.Windows.Forms.View.Details;
            // 
            // FrmListViewTXT
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.ControlBox = false;
            this.Controls.Add(this.lst_Log);
            this.Controls.Add(this.dateTimePicker2);
            this.Controls.Add(this.dateTimePicker1);
            this.Controls.Add(this.Btn_Lst_Save);
            this.Controls.Add(this.Btn_Search);
            this.Controls.Add(this.lst_Search);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "FrmListViewTXT";
            this.Text = "FrmListViewText";
            this.Load += new System.EventHandler(this.FrmListViewTXT_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ListView lst_Search;
        private System.Windows.Forms.Button Btn_Search;
        private System.Windows.Forms.Button Btn_Lst_Save;
        private System.Windows.Forms.DateTimePicker dateTimePicker1;
        private System.Windows.Forms.DateTimePicker dateTimePicker2;
        private System.Windows.Forms.ListView lst_Log;
    }
}