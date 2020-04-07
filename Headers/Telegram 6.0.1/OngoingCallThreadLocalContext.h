//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;
@protocol OngoingCallThreadLocalContextQueue;

@interface OngoingCallThreadLocalContext : NSObject
{
    id <OngoingCallThreadLocalContextQueue> _queue;
    int _contextId;
    int _networkType;
    double _callReceiveTimeout;
    double _callRingTimeout;
    double _callConnectTimeout;
    double _callPacketTimeout;
    int _dataSavingMode;
    // Error parsing type: ^{VoIPController=^^?^vi{map<long long, tgvoip::Endpoint, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, tgvoip::Endpoint> > >={__tree<std::__1::__value_type<long long, tgvoip::Endpoint>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, tgvoip::Endpoint>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, tgvoip::Endpoint> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, tgvoip::Endpoint>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, tgvoip::Endpoint>, std::__1::less<long long>, true> >=Q}}}qqqB{atomic<unsigned int>=AI}III{vector<tgvoip::VoIPController::RecentOutgoingPacket, std::__1::allocator<tgvoip::VoIPController::RecentOutgoingPacket> >=^{RecentOutgoingPacket}^{RecentOutgoingPacket}{__compressed_pair<tgvoip::VoIPController::RecentOutgoingPacket *, std::__1::allocator<tgvoip::VoIPController::RecentOutgoingPacket> >=^{RecentOutgoingPacket}}}[32d]{HistoricBuffer<unsigned int, 10, double>={array<unsigned int, 10>=[10I]}q}II^{AudioIO}^{AudioInput}^{AudioOutput}^{OpusEncoder}{vector<tgvoip::VoIPController::PendingOutgoingPacket, std::__1::allocator<tgvoip::VoIPController::PendingOutgoingPacket> >=^{PendingOutgoingPacket}^{PendingOutgoingPacket}{__compressed_pair<tgvoip::VoIPController::PendingOutgoingPacket *, std::__1::allocator<tgvoip::VoIPController::PendingOutgoingPacket> >=^{PendingOutgoingPacket}}}^{EchoCanceller}{Mutex={_opaque_pthread_mutex_t=q[56c]}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}BB^{Thread}^{Thread}IIII{HistoricBuffer<double, 32, double>={array<double, 32>=[32d]}q}BiiiBI{vector<std::__1::shared_ptr<tgvoip::VoIPController::Stream>, std::__1::allocator<std::__1::shared_ptr<tgvoip::VoIPController::Stream> > >=^{shared_ptr<tgvoip::VoIPController::Stream>}^{shared_ptr<tgvoip::VoIPController::Stream>}{__compressed_pair<std::__1::shared_ptr<tgvoip::VoIPController::Stream> *, std::__1::allocator<std::__1::shared_ptr<tgvoip::VoIPController::Stream> > >=^{shared_ptr<tgvoip::VoIPController::Stream>}}}{vector<std::__1::shared_ptr<tgvoip::VoIPController::Stream>, std::__1::allocator<std::__1::shared_ptr<tgvoip::VoIPController::Stream> > >=^{shared_ptr<tgvoip::VoIPController::Stream>}^{shared_ptr<tgvoip::VoIPController::Stream>}{__compressed_pair<std::__1::shared_ptr<tgvoip::VoIPController::Stream> *, std::__1::allocator<std::__1::shared_ptr<tgvoip::VoIPController::Stream> > >=^{shared_ptr<tgvoip::VoIPController::Stream>}}}[256C][8C][16C]dBBBB{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}d{vector<tgvoip::VoIPController::QueuedPacket, std::__1::allocator<tgvoip::VoIPController::QueuedPacket> >=^{QueuedPacket}^{QueuedPacket}{__compressed_pair<tgvoip::VoIPController::QueuedPacket *, std::__1::allocator<tgvoip::VoIPController::QueuedPacket> >=^{QueuedPacket}}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}dd{Config=ddi{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}BBBBBBBB}i^{CongestionControl}{TrafficStats=QQQQ}BBB^{NetworkSocket}^{NetworkSocket}^{__sFILE}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}BBB^{SocketSelectCanceller}{HistoricBuffer<unsigned char, 4, int>={array<unsigned char, 4>=[4C]}q}Bidiii{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}S{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}^{IPv4Address}I{Callbacks=^?^?^?^?^?}BBBBBiBB{vector<tgvoip::VoIPController::UnacknowledgedExtraData, std::__1::allocator<tgvoip::VoIPController::UnacknowledgedExtraData> >=^{UnacknowledgedExtraData}^{UnacknowledgedExtraData}{__compressed_pair<tgvoip::VoIPController::UnacknowledgedExtraData *, std::__1::allocator<tgvoip::VoIPController::UnacknowledgedExtraData> >=^{UnacknowledgedExtraData}}}{unordered_map<unsigned char, unsigned long long, std::__1::hash<unsigned char>, std::__1::equal_to<unsigned char>, std::__1::allocator<std::__1::pair<const unsigned char, unsigned long long> > >={__hash_table<std::__1::__hash_value_type<unsigned char, unsigned long long>, std::__1::__unordered_map_hasher<unsigned char, std::__1::__hash_value_type<unsigned char, unsigned long long>, std::__1::hash<unsigned char>, true>, std::__1::__unordered_map_equal<unsigned char, std::__1::__hash_value_type<unsigned char, unsigned long long>, std::__1::equal_to<unsigned char>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned char, unsigned long long> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned char, unsigned long long>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned char, std::__1::__hash_value_type<unsigned char, unsigned long long>, std::__1::hash<unsigned char>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned char, std::__1::__hash_value_type<unsigned char, unsigned long long>, std::__1::equal_to<unsigned char>, true> >=f}}}BB{IPv6Address=^^?[16C]}Bi{vector<tgvoip::Buffer, std::__1::allocator<tgvoip::Buffer> >=^{Buffer}^{Buffer}{__compressed_pair<tgvoip::Buffer *, std::__1::allocator<tgvoip::Buffer> >=^{Buffer}}}BBi{MessageThread=^^?{function<void ()>={__value_func<void ()>={type=[24C]}^{__base<void ()>}}}^{_opaque_pthread_t}*BBB{vector<tgvoip::MessageThread::Message, std::__1::allocator<tgvoip::MessageThread::Message> >=^{Message}^{Message}{__compressed_pair<tgvoip::MessageThread::Message *, std::__1::allocator<tgvoip::MessageThread::Message> >=^{Message}}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}IB{_opaque_pthread_cond_t=q[40c]}}BB{atomic<unsigned int>=AI}{HistoricBuffer<unsigned int, 5, unsigned int>={array<unsigned int, 5>=[5I]}q}BB{vector<tgvoip::VoIPController::DebugLoggedPacket, std::__1::allocator<tgvoip::VoIPController::DebugLoggedPacket> >=^{DebugLoggedPacket}^{DebugLoggedPacket}{__compressed_pair<tgvoip::VoIPController::DebugLoggedPacket *, std::__1::allocator<tgvoip::VoIPController::DebugLoggedPacket> >=^{DebugLoggedPacket}}}III{Volume=^^?Bff}{Volume=^^?Bff}{vector<unsigned int, std::__1::allocator<unsigned int> >=^I^I{__compressed_pair<unsigned int *, std::__1::allocator<unsigned int> >=^I}}iB^{VideoSource}^{VideoRenderer}dII{vector<tgvoip::VoIPController::SentVideoFrame, std::__1::allocator<tgvoip::VoIPController::SentVideoFrame> >=^{SentVideoFrame}^{SentVideoFrame}{__compressed_pair<tgvoip::VoIPController::SentVideoFrame *, std::__1::allocator<tgvoip::VoIPController::SentVideoFrame> >=^{SentVideoFrame}}}{Mutex={_opaque_pthread_mutex_t=q[56c]}}B{ScreamCongestionController=ff{HistoricBuffer<float, 20, float>={array<float, 20>=[20f]}q}ff{HistoricBuffer<float, 100, float>={array<float, 100>=[100f]}q}BIIIIIIfffffIIfBfdIddddI{vector<tgvoip::video::ScreamCongestionController::ValueSample, std::__1::allocator<tgvoip::video::ScreamCongestionController::ValueSample> >=^{ValueSample}^{ValueSample}{__compressed_pair<tgvoip::video::ScreamCongestionController::ValueSample *, std::__1::allocator<tgvoip::video::ScreamCongestionController::ValueSample> >=^{ValueSample}}}IIIdd{HistoricBuffer<float, 25, float>={array<float, 25>=[25f]}q}}{vector<tgvoip::VoIPController::PendingVideoFrameFragment, std::__1::allocator<tgvoip::VoIPController::PendingVideoFrameFragment> >=^{PendingVideoFrameFragment}^{PendingVideoFrameFragment}{__compressed_pair<tgvoip::VoIPController::PendingVideoFrameFragment *, std::__1::allocator<tgvoip::VoIPController::PendingVideoFrameFragment> >=^{PendingVideoFrameFragment}}}IIIdBBBBBB{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >={__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >={__rep=(?={__long=*QQ}{__short=[23c]{?=C}}{__raw=[3Q]})}}}IIIIIIIIIIIddddIdddI}, name: _controller
    int _state;
    int _signalBars;
    NSData *_lastDerivedState;
    CDUnknownBlockType _stateChanged;
    CDUnknownBlockType _signalBarsChanged;
}

+ (id)version;
+ (int)maxLayer;
+ (void)applyServerConfig:(id)arg1;
+ (void)setupLoggingFunction:(CDUnknownFunctionPointerType)arg1;
@property(copy, nonatomic) CDUnknownBlockType signalBarsChanged; // @synthesize signalBarsChanged=_signalBarsChanged;
@property(copy, nonatomic) CDUnknownBlockType stateChanged; // @synthesize stateChanged=_stateChanged;
- (void).cxx_destruct;
- (void)setNetworkType:(int)arg1;
- (void)setIsMuted:(_Bool)arg1;
- (void)signalBarsChanged:(int)arg1;
- (void)controllerStateChanged:(int)arg1;
- (id)getDerivedState;
- (id)version;
- (id)debugInfo;
- (_Bool)needRate;
- (void)stop:(CDUnknownBlockType)arg1;
- (void)startWithKey:(id)arg1 isOutgoing:(_Bool)arg2 primaryConnection:(id)arg3 alternativeConnections:(id)arg4 maxLayer:(int)arg5 allowP2P:(_Bool)arg6 logPath:(id)arg7;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 proxy:(id)arg2 networkType:(int)arg3 dataSaving:(int)arg4 derivedState:(id)arg5;

@end
