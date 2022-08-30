namespace CS_Test
{
    partial class FrmMAIN
    {
        /// <summary>
        /// 필수 디자이너 변수입니다.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 사용 중인 모든 리소스를 정리합니다.
        /// </summary>
        /// <param name="disposing">관리되는 리소스를 삭제해야 하면 true이고, 그렇지 않으면 false입니다.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form 디자이너에서 생성한 코드

        /// <summary>
        /// 디자이너 지원에 필요한 메서드입니다. 
        /// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
        /// </summary>
        private void InitializeComponent()
        {
            this.Btn_pGridForm = new System.Windows.Forms.Button();
            this.Btn_lstViewFrm = new System.Windows.Forms.Button();
            this.Btn_LogTest = new System.Windows.Forms.Button();
            this.Btn_Delegate = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Btn_pGridForm
            // 
            this.Btn_pGridForm.Location = new System.Drawing.Point(12, 12);
            this.Btn_pGridForm.Name = "Btn_pGridForm";
            this.Btn_pGridForm.Size = new System.Drawing.Size(114, 51);
            this.Btn_pGridForm.TabIndex = 0;
            this.Btn_pGridForm.Text = "PropertyGrid";
            this.Btn_pGridForm.UseVisualStyleBackColor = true;
            this.Btn_pGridForm.Click += new System.EventHandler(this.Btn_pGridForm_Click);
            // 
            // Btn_lstViewFrm
            // 
            this.Btn_lstViewFrm.Location = new System.Drawing.Point(162, 12);
            this.Btn_lstViewFrm.Name = "Btn_lstViewFrm";
            this.Btn_lstViewFrm.Size = new System.Drawing.Size(114, 51);
            this.Btn_lstViewFrm.TabIndex = 1;
            this.Btn_lstViewFrm.Text = "ListView";
            this.Btn_lstViewFrm.UseVisualStyleBackColor = true;
            this.Btn_lstViewFrm.Click += new System.EventHandler(this.Btn_lstViewFrm_Click);
            // 
            // Btn_LogTest
            // 
            this.Btn_LogTest.Location = new System.Drawing.Point(402, 12);
            this.Btn_LogTest.Name = "Btn_LogTest";
            this.Btn_LogTest.Size = new System.Drawing.Size(114, 51);
            this.Btn_LogTest.TabIndex = 2;
            this.Btn_LogTest.Text = "Log Data Test";
            this.Btn_LogTest.UseVisualStyleBackColor = true;
            this.Btn_LogTest.Click += new System.EventHandler(this.Btn_LogTest_Click);
            // 
            // Btn_Delegate
            // 
            this.Btn_Delegate.Location = new System.Drawing.Point(282, 12);
            this.Btn_Delegate.Name = "Btn_Delegate";
            this.Btn_Delegate.Size = new System.Drawing.Size(114, 51);
            this.Btn_Delegate.TabIndex = 3;
            this.Btn_Delegate.Text = "Delegate Test";
            this.Btn_Delegate.UseVisualStyleBackColor = true;
            this.Btn_Delegate.Click += new System.EventHandler(this.Btn_Delegate_Click);
            // 
            // FrmMAIN
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1026, 581);
            this.Controls.Add(this.Btn_Delegate);
            this.Controls.Add(this.Btn_LogTest);
            this.Controls.Add(this.Btn_lstViewFrm);
            this.Controls.Add(this.Btn_pGridForm);
            this.Name = "FrmMAIN";
            this.Text = "MAIN";
            this.Load += new System.EventHandler(this.FrmMAIN_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button Btn_pGridForm;
        private System.Windows.Forms.Button Btn_lstViewFrm;
        private System.Windows.Forms.Button Btn_LogTest;
        private System.Windows.Forms.Button Btn_Delegate;
    }
}

