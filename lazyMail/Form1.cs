namespace lazyMail
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            checkRadio();
        }
        private void checkRadio()
        {
            if (radioButton1.Checked)
            {
                pictureBox1.Image = lazyMail.Properties.Resources.pocztowka;
            }
            else if (radioButton2.Checked)
            {
                pictureBox1.Image = lazyMail.Properties.Resources.list;
            }
            else if (radioButton3.Checked)
            {
                pictureBox1.Image = Properties.Resources.paczka;
            }
        }
    }
}