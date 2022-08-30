namespace CS_Test
{
    partial class FrmpGridINI
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
            this.pGrid_Save = new System.Windows.Forms.PropertyGrid();
            this.Btn_Save = new System.Windows.Forms.Button();
            this.Btn_Load = new System.Windows.Forms.Button();
            this.pGrid_Load = new System.Windows.Forms.PropertyGrid();
            this.SuspendLayout();
            // 
            // pGrid_Save
            // 
            this.pGrid_Save.Location = new System.Drawing.Point(12, 12);
            this.pGrid_Save.Name = "pGrid_Save";
            this.pGrid_Save.Size = new System.Drawing.Size(344, 485);
            this.pGrid_Save.TabIndex = 0;
            // 
            // Btn_Save
            // 
            this.Btn_Save.Location = new System.Drawing.Point(362, 39);
            this.Btn_Save.Name = "Btn_Save";
            this.Btn_Save.Size = new System.Drawing.Size(113, 53);
            this.Btn_Save.TabIndex = 1;
            this.Btn_Save.Text = "Save";
            this.Btn_Save.UseVisualStyleBackColor = true;
            this.Btn_Save.Click += new System.EventHandler(this.Btn_Save_Click);
            // 
            // Btn_Load
            // 
            this.Btn_Load.Location = new System.Drawing.Point(362, 130);
            this.Btn_Load.Name = "Btn_Load";
            this.Btn_Load.Size = new System.Drawing.Size(113, 53);
            this.Btn_Load.TabIndex = 2;
            this.Btn_Load.Text = "Load";
            this.Btn_Load.UseVisualStyleBackColor = true;
            this.Btn_Load.Click += new System.EventHandler(this.Btn_Load_Click);
            // 
            // pGrid_Load
            // 
            this.pGrid_Load.Location = new System.Drawing.Point(481, 12);
            this.pGrid_Load.Name = "pGrid_Load";
            this.pGrid_Load.Size = new System.Drawing.Size(344, 485);
            this.pGrid_Load.TabIndex = 3;
            // 
            // FrmpGridINI
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(839, 512);
            this.ControlBox = false;
            this.Controls.Add(this.pGrid_Load);
            this.Controls.Add(this.Btn_Load);
            this.Controls.Add(this.Btn_Save);
            this.Controls.Add(this.pGrid_Save);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "FrmpGridINI";
            this.Text = "PropertyGrid_INI";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PropertyGrid pGrid_Save;
        private System.Windows.Forms.Button Btn_Save;
        private System.Windows.Forms.Button Btn_Load;
        private System.Windows.Forms.PropertyGrid pGrid_Load;
    }
}