//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GCKNSocket.h>

@protocol GCKNTCPServerSocketDelegate;

@interface GCKNTCPServerSocket : GCKNSocket
{
    unsigned long long _bufferSize;
    id <GCKNTCPServerSocketDelegate> _delegate;
}

@property(nonatomic) __weak id <GCKNTCPServerSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)acceptConnection:(int)arg1;
- (_Bool)listenWithBacklog:(int)arg1;
- (id)initWithLocalAddress:(id)arg1 localPort:(unsigned short)arg2 bufferSize:(unsigned long long)arg3;
- (id)initWithAddressType:(long long)arg1 localPort:(unsigned short)arg2 bufferSize:(unsigned long long)arg3;
- (id)initWithAddressType:(long long)arg1 localPort:(unsigned short)arg2;

@end
