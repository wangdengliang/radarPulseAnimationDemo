#使用说明
DLRadarView *v=[[DLRadarView alloc]initWithFrame:CGRectMake(50, 50, 150, 150) andThumbnail:@"ic_user"];//必须使用这个函数初始化
    v.circleColor=[UIColor redColor];//圈圈背景色
    v.borderColor=[UIColor greenColor];//圈圈边界颜色
    v.pulsingCount=5;//圈圈个数
    v.animationDuration=2;//
    [v setBackgroundColor:[UIColor whiteColor]];
    [self.view addSubview:v];
