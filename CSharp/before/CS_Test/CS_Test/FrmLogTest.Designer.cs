namespace CS_Test
{
    partial class FrmLogTest
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
            this.Btn_Save = new System.Windows.Forms.Button();
            this.Tbo_Log = new System.Windows.Forms.TextBox();
            this.Cbo_Judge = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // Btn_Save
            // 
            this.Btn_Save.Location = new System.Drawing.Point(270, 135);
            this.Btn_Save.Name = "Btn_Save";
            this.Btn_Save.Size = new System.Drawing.Size(100, 30);
            this.Btn_Save.TabIndex = 0;
            this.Btn_Save.Text = "Save";
            this.Btn_Save.UseVisualStyleBackColor = true;
            this.Btn_Save.Click += new System.EventHandler(this.Btn_Save_Click);
            // 
            // Tbo_Log
            // 
            this.Tbo_Log.Location = new System.Drawing.Point(67, 158);
            this.Tbo_Log.Name = "Tbo_Log";
            this.Tbo_Log.Size = new System.Drawing.Size(182, 21);
            this.Tbo_Log.TabIndex = 1;
            // 
            // Cbo_Judge
            // 
            this.Cbo_Judge.FormattingEnabled = true;
            this.Cbo_Judge.Location = new System.Drawing.Point(118, 115);
            this.Cbo_Judge.Name = "Cbo_Judge";
            this.Cbo_Judge.Size = new System.Drawing.Size(131, 20);
            this.Cbo_Judge.TabIndex = 2;
            // 
            // FrmLogTest
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.ControlBox = false;
            this.Controls.Add(this.Cbo_Judge);
            this.Controls.Add(this.Tbo_Log);
            this.Controls.Add(this.Btn_Save);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "FrmLogTest";
            this.Text = "FrmLogTest";
            this.Load += new System.EventHandler(this.FrmLogTest_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Btn_Save;
        private System.Windows.Forms.TextBox Tbo_Log;
        private System.Windows.Forms.ComboBox Cbo_Judge;
    }
}