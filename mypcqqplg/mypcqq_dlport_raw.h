#pragma once
//月落专用易语言dll接口声明转换器生成
//QQ:973544732

#include <windows.h>

extern void *_dll__funs[72]; //声明全局的数组 避免错误
/// \brief 根据提交的QQ号计算得到页面操作用参数Bkn或G_tk`
char * Api_GetGtk_Bkn(char * 响应的QQ);

/// \brief 根据提交的QQ号计算得到页面操作用参数长Bkn或长G_tk`
char * Api_GetBkn32(char * 响应的QQ);

/// \brief 根据提交的QQ号计算得到页面操作用参数长Ldw`
char * Api_GetLdw(char * 响应的QQ);

/// \brief 取得框架所在目录.可能鸡肋了。`
char * Api_GetRunPath();

/// \brief 取得当前框架内在线可用的QQ列表`
char * Api_GetOnlineQQlist();

/// \brief 取得框架内所有QQ列表。包括未登录以及登录失败的QQ`
char * Api_GetQQlist();

/// \brief 根据QQ取得对应的会话秘钥`
char * Api_GetSessionkey(char * 响应的QQ);

/// \brief 取得页面登录用的Clientkey`
char * Api_GetClientkey(char * 响应的QQ);

/// \brief 取得页面登录用的长Clientkey`
char * Api_GetLongClientkey(char * 响应的QQ);

/// \brief 取得页面操作用的Cookies`
char * Api_GetCookies(char * 响应的QQ);

/// \brief 取得框架内设置的信息发送前缀`
char * Api_GetPrefix();

/// \brief 将群名片加入高速缓存当作.`
void Api_Cache_NameCard(char * 群号, char * QQ, char * 名片);

/// \brief 将指定QQ移出QQ黑名单`
void Api_DBan(char * 响应的QQ, char * QQ);

/// \brief 将指定QQ列入QQ黑名单`
void Api_Ban(char * 响应的QQ, char * QQ);

/// \brief 禁言群成员`
/// \param 群号	"禁言对象所在群."
/// \param QQ	"禁言对象.留空为全群禁言"
/// \param 时长	"单位:秒 最大为1个月. 为零解除对象或全群禁言"
bool Api_Shutup(char * 响应的QQ, char * 群号, char * QQ, int 时长);

/// \brief 发群公告`
void Api_SetNotice(char * 响应的QQ, char * 群号, char * 标题, char * 内容);

/// \brief 取群公告`
char * Api_GetNotice(char * 响应的QQ, char * 群号);

/// \brief 取群名片`
char * Api_GetNameCard(char * 响应的QQ, char * 群号, char * QQ);

/// \brief 设置群名片`
void Api_SetNameCard(char * 响应的QQ, char * 群号, char * QQ, char * 名片);

/// \brief 退出讨论组`
void Api_QuitDG(char * 响应的QQ, char * 讨论组ID);

/// \brief 删除好友`
bool Api_DelFriend(char * 响应的QQ, char * QQ);

/// \brief 将对象移除群`
bool Api_Kick(char * 响应的QQ, char * 群号, char * 对象);

/// \brief 主动加群.为了避免广告、群发行为。出现验证码时将会直接失败不处理`
void Api_JoinGroup(char * 响应的QQ, char * 群号, char * 附加理由);

/// \brief 退出群`
void Api_QuitGroup(char * 响应的QQ, char * 群号);

/// \brief 返回值:成功返回图片GUID用于发送该图片.失败返回空.  图片尺寸应小于4MB`
/// \param 响应的QQ	"机器人QQ"
/// \param 参_上传类型	"1好友2群 注:好友图和群图的GUID并不相同并不通用 需要非别上传。群、讨论组用类型2 临时会话、好友信息需要类型1"
/// \param 参_参考对象	"上传该图片所属的群号或QQ"
/// \param 参_图片数据	"图片字节集数据或字节集数据指针()"
char * Api_UploadPic(char * 响应的QQ, int 参_上传类型, char * 参_参考对象, unsigned char * 参_图片数据);

/// \brief 根据图片GUID取得图片下载连接 失败返回空`
/// \param 图片GUID	"{xxxxxxxx-xxxx-xxxx-xxxx-xxxxxxxxxxxx}.jpg这样的GUID"
char * Api_GuidGetPicLink(char * 图片GUID);

/// \brief 回复信息 请尽量避免使用该API`
/// \param 信息类型	"1好友 2群 3讨论组 4群临时会话 5讨论组临时会话"
/// \param 回复对象	"接收这条信息的对象"
/// \param 内容	"信息内容"
int Api_Reply(char * 响应的QQ, int 信息类型, char * 回复对象, char * 内容);

/// \brief 向对象、目标发送信息 支持好友 群 讨论组 群临时会话 讨论组临时会话`
/// \param 信息类型	"1好友 2群 3讨论组 4群临时会话 5讨论组临时会话"
/// \param 参考子类型	"无特殊说明情况下留空或填零"
/// \param 收信群_讨论组	"发送群信息、讨论组信息、群临时会话信息、讨论组临时会话信息时填写"
/// \param 收信对象	"最终接收这条信息的对象QQ"
/// \param 内容	"信息内容"
int Api_SendMsg(char * 响应的QQ, int 信息类型, int 参考子类型, char * 收信群_讨论组, char * 收信对象, char * 内容);

/// \brief 发送封包`
char * Api_Send(char * 封包内容);

/// \brief 在框架记录页输出一行信息`
/// \param 内容	"输出的内容"
int Api_OutPut(char * 内容);

/// \brief 取得本插件启用状态`
bool Api_IsEnable();

/// \brief 登录一个现存的QQ`
/// \param QQ	"欲登录的Q"
bool Api_Login(char * QQ);

/// \brief 让指定QQ下线`
void Api_Logout(char * QQ);

/// \brief tean加密算法`
char * Api_Tea加密(char * 加密内容, char * Key);

/// \brief tean解密算法`
char * Api_Tea解密(char * 解密内容, char * Key);

/// \brief 取用户名`
char * Api_GetNick(char * QQ);

/// \brief 取QQ等级+QQ会员等级 返回json格式信息`
char * Api_GetQQLevel(char * QQ);

/// \brief 群号转群ID`
char * Api_GNGetGid(char * 群号);

/// \brief 群ID转群号`
char * Api_GidGetGN(char * 群ID);

/// \brief 取框架版本号(发布时间戳`
int Api_GetVersion();

/// \brief 取框架版本名`
char * Api_GetVersionName();

/// \brief 取当前框架内部时间戳_周期性与服务器时间同步`
int Api_GetTimeStamp();

/// \brief 取得框架输出列表内所有信息`
char * Api_GetLog();

/// \brief 判断是否处于被屏蔽群信息状态。`
bool Api_IfBlock(char * 响应的QQ);

/// \brief 取包括群主在内的群管列表`
char * Api_GetAdminList(char * 响应的QQ, char * 群号);

/// \brief 发说说`
char * Api_AddTaotao(char * 响应的QQ, char * 内容);

/// \brief 取个签`
char * Api_GetSign(char * 响应的QQ, char * 对象);

/// \brief 设置个签`
char * Api_SetSign(char * 响应的QQ, char * 内容);

/// \brief 通过qun.qzone.qq.com接口取得取群列表.成功返回转码后的JSON格式文本信息`
char * Api_GetGroupListA(char * 响应的QQ);

/// \brief 通过qun.qq.com接口取得取群列表.成功返回转码后的JSON格式文本信息`
char * Api_GetGroupListB(char * 响应的QQ);

/// \brief 通过qun.qq.com接口取得群成员列表 成功返回转码后的JSON格式文本`
char * Api_GetGroupMemberA(char * 响应的QQ, char * 群号);

/// \brief 通过qun.qzone.qq.com接口取得群成员列表 成功返回转码后的JSON格式文本`
char * Api_GetGroupMemberB(char * 响应的QQ, char * 群号);

/// \brief 通过qun.qq.com接口取得好友列表。成功返回转码后的JSON文本`
char * Api_GetFriendList(char * 响应的QQ);

/// \brief 取Q龄 成功返回Q龄 失败返回-1`
int Api_GetQQAge(char * 响应的QQ, char * QQ);

/// \brief 取年龄 成功返回年龄 失败返回-1`
int Api_GetAge(char * 响应的QQ, char * QQ);

/// \brief 取个人说明`
/// \param QQ	"对象QQ"
char * Api_GetPersonalProfile(char * 响应的QQ, char * QQ);

/// \brief 取邮箱 成功返回邮箱 失败返回空`
char * Api_GetEmail(char * 响应的QQ, char * QQ);

/// \brief 取对象性别 1男 2女  未或失败返回-1`
int Api_GetGender(char * 响应的QQ, char * QQ);

/// \brief 向好友发送‘正在输入’的状态信息.当好友收到信息之后 “正在输入”状态会立刻被打断`
int Api_SendTyping(char * 响应的QQ, char * QQ);

/// \brief 向好友发送窗口抖动信息`
int Api_SendShake(char * 响应的QQ, char * QQ);

/// \brief 取得框架内随机一个在线且可以使用的QQ`
char * Api_GetRadomOnlineQQ();

/// \brief 往帐号列表添加一个Q.当该Q已存在时则覆盖密码`
/// \param 自动登录	"运行框架时是否自动登录该Q.若添加后需要登录该Q则需要通过Api_Login操作"
bool Api_AddQQ(char * QQ, char * 密码, bool 自动登录);

/// \brief 设置在线状态+附加信息 `
/// \param 在线状态	"1~6 分别对应我在线上"
/// \param 状态附加信息	"最大255字节"
bool Api_SetOLStatus(char * 响应的QQ, int 在线状态, char * 状态附加信息);

/// \brief 取得机器码`
char * Api_GetMC();

/// \brief 邀请对象加入群 失败返回错误理由`
/// \param 好友QQ	"多个好友用换行分割"
char * Api_GroupInvitation(char * 响应的QQ, char * 好友QQ, char * 群号);

/// \brief 创建一个讨论组 成功返回讨论组ID 失败返回空 注:每24小时只能创建100个讨论组 悠着点用`
char * Api_CreateDG(char * 响应的QQ);

/// \brief 将对象移除讨论组.成功返回空 失败返回理由`
char * Api_KickDG(char * 响应的QQ, char * 讨论组ID, char * 成员);

/// \brief 邀请对象加入讨论组 成功返回空 失败返回理由`
/// \param 成员组	"多个成员用换行符分割"
char * Api_DGInvitation(char * 响应的QQ, char * 讨论组ID, char * 成员组);

/// \brief 成功返回以换行符分割的讨论组号列表.最大为100个讨论组  失败返回空`
char * Api_GetDGList(char * 响应的QQ);

/// \brief 向对象发送一条音乐信息（所谓的点歌）次数不限`
/// \param 收信对象类型	"同Api_SendMsg  1好友 2群 3讨论组 4群临时会话 5讨论组临时会话"
/// \param 收信对象所属群_讨论组	"发群内、临时会话必填 好友可不填"
/// \param 收信对象QQ	"临时会话、好友必填 发至群内可不填"
/// \param 音乐简介	"留空默认‘QQ音乐 的分享’"
/// \param 音乐播放页面连接	"任意直连或短链接均可 留空为空 无法点开"
/// \param 音乐封面连接	"任意直连或短链接均可 可空 例:http://url.cn/cDiJT4"
/// \param 音乐文件直连连接	"任意直连或短链接均可 不可空 例:http://url.cn/djwXjr"
/// \param 曲名	"可空"
/// \param 歌手名	"可空"
/// \param 音乐来源名	"可空 为空默认QQ音乐"
/// \param 音乐来源图标连接	"可空 为空默认QQ音乐 http://qzonestyle.gtimg.cn/ac/qzone/applogo/64/308/100497308_64.gif"
bool Api_SendMusic(char * 响应的QQ, int 收信对象类型, char * 收信对象所属群_讨论组, char * 收信对象QQ, char * 音乐简介, char * 音乐播放页面连接, char * 音乐封面连接, char * 音乐文件直连连接, char * 曲名, char * 歌手名, char * 音乐来源名, char * 音乐来源图标连接);

/// \brief `
/// \param 收信对象类型	"同Api_SendMsg  1好友 2群 3讨论组 4群临时会话 5讨论组临时会话"
/// \param 收信对象所属群_讨论组	"发群内、临时会话必填 好友可不填"
/// \param 收信对象QQ	"临时会话、好友必填 发至群内可不填"
/// \param 结构子类型	"00 基本 02 点歌 其他不明"
bool Api_SendObjectMsg(char * 响应的QQ, int 收信对象类型, char * 收信对象所属群_讨论组, char * 收信对象QQ, char * ObjectMsg, int 结构子类型);

/// \brief 判断对象是否为好友（双向）`
bool Api_IsFriend();

void DPLS_INIT_LOADALLPORT();