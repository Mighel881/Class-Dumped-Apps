//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpeedTestEngine/NSNetServiceDelegate-Protocol.h>

@class NSMutableSet, NSNetService, NSSet, NSString;
@protocol QServerDelegate;

@interface QServer : NSObject <NSNetServiceDelegate>
{
    _Bool disableIPv6_;
    NSString *domain_;
    NSString *type_;
    NSString *name_;
    unsigned long long preferredPort_;
    id <QServerDelegate> delegate_;
    unsigned long long connectionSequenceNumber_;
    unsigned long long registeredPort_;
    NSString *registeredName_;
    NSMutableSet *connectionsMutable_;
    NSMutableSet *runLoopModesMutable_;
    NSMutableSet *listeningSockets_;
    NSNetService *netService_;
}

+ (id)keyPathsForValuesAffectingStarted;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=netService_;
@property(readonly, retain, nonatomic) NSMutableSet *listeningSockets; // @synthesize listeningSockets=listeningSockets_;
@property(retain, nonatomic) NSMutableSet *runLoopModesMutable; // @synthesize runLoopModesMutable=runLoopModesMutable_;
@property(readonly, retain, nonatomic) NSMutableSet *connectionsMutable; // @synthesize connectionsMutable=connectionsMutable_;
@property(copy, nonatomic) NSString *registeredName; // @synthesize registeredName=registeredName_;
@property(nonatomic) unsigned long long registeredPort; // @synthesize registeredPort=registeredPort_;
@property(nonatomic) unsigned long long connectionSequenceNumber; // @synthesize connectionSequenceNumber=connectionSequenceNumber_;
@property(nonatomic) id <QServerDelegate> delegate; // @synthesize delegate=delegate_;
@property(nonatomic) _Bool disableIPv6; // @synthesize disableIPv6=disableIPv6_;
@property(readonly, nonatomic) unsigned long long preferredPort; // @synthesize preferredPort=preferredPort_;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=name_;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=type_;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=domain_;
- (void).cxx_destruct;
- (void)removeFromRunLoopModesInputStream:(id)arg1 outputStream:(id)arg2;
- (void)scheduleInRunLoopModesInputStream:(id)arg1 outputStream:(id)arg2;
@property(readonly, copy, nonatomic) NSSet *runLoopModes;
- (void)removeRunLoopMode:(id)arg1;
- (void)addRunLoopMode:(id)arg1;
- (void)closeAllConnections;
- (void)closeOneConnection:(id)arg1;
- (void)closeConnection:(id)arg1 notify:(_Bool)arg2;
- (void)closeConnection:(id)arg1;
- (void)connectionAcceptedWithSocket:(int)arg1;
- (id)connectionForSocket:(int)arg1;
- (void)stop;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)start;
- (void)didStopWithError:(id)arg1;
- (void)didStart;
- (unsigned long long)listenOnPortError:(id *)arg1;
- (void)addListeningSocket:(int)arg1;
@property(readonly, nonatomic, getter=isStarted) _Bool started;
- (void)closeSocket:(int)arg1;
- (int)listenOnSocket:(int)arg1;
- (int)boundPort:(unsigned long long *)arg1 forSocket:(int)arg2;
- (int)bindSocket:(int)arg1 toPort:(unsigned long long)arg2 inAddressFamily:(int)arg3;
- (int)setOption:(int)arg1 atLevel:(int)arg2 onSocket:(int)arg3;
- (void)logWithFormat:(id)arg1;
- (void)logWithFormat:(id)arg1 arguments:(char *)arg2;
@property(readonly, copy, nonatomic) NSSet *connections;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 preferredPort:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

