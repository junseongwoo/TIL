namespace CS_Test
{
    partial class FrmDelegateTest
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
            this.Btn_DelegateSend = new System.Windows.Forms.Button();
            this.Tbo_Delegate_Test = new System.Windows.Forms.TextBox();
            this.Cbo_Delegate_Test = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // Btn_DelegateSend
            // 
            this.Btn_DelegateSend.Location = new System.Drawing.Point(426, 126);
            this.Btn_DelegateSend.Name = "Btn_DelegateSend";
            this.Btn_DelegateSend.Size = new System.Drawing.Size(133, 51);
            this.Btn_DelegateSend.TabIndex = 0;
            this.Btn_DelegateSend.Text = "Delegate_Send";
            this.Btn_DelegateSend.UseVisualStyleBackColor = true;
            this.Btn_DelegateSend.Click += new System.EventHandler(this.Btn_DelegateSend_Click);
            // 
            // Tbo_Delegate_Test
            // 
            this.Tbo_Delegate_Test.Location = new System.Drawing.Point(238, 156);
            this.Tbo_Delegate_Test.Name = "Tbo_Delegate_Test";
            this.Tbo_Delegate_Test.Size = new System.Drawing.Size(158, 21);
            this.Tbo_Delegate_Test.TabIndex = 1;
            // 
            // Cbo_Delegate_Test
            // 
            this.Cbo_Delegate_Test.FormattingEnabled = true;
            this.Cbo_Delegate_Test.Location = new System.Drawing.Point(317, 126);
            this.Cbo_Delegate_Test.Name = "Cbo_Delegate_Test";
            this.Cbo_Delegate_Test.Size = new System.Drawing.Size(79, 20);
            this.Cbo_Delegate_Test.TabIndex = 2;
            // 
            // FrmDelegateTest
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.ControlBox = false;
            this.Controls.Add(this.Cbo_Delegate_Test);
            this.Controls.Add(this.Tbo_Delegate_Test);
            this.Controls.Add(this.Btn_DelegateSend);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "FrmDelegateTest";
            this.Text = "FrmDelegateTest";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Btn_DelegateSend;
        private System.Windows.Forms.TextBox Tbo_Delegate_Test;
        private System.Windows.Forms.ComboBox Cbo_Delegate_Test;
    }
}