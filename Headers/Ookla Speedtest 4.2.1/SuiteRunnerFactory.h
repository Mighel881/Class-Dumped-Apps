//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ServerHost;

@interface SuiteRunnerFactory : NSObject
{
    ServerHost *_server;
    double _primerDuration;
}

@property(nonatomic) double primerDuration; // @synthesize primerDuration=_primerDuration;
@property(retain, nonatomic) ServerHost *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (id)createSuiteRunnerWithDelegate:(id)arg1 threadingType:(short)arg2 wasUserSelected:(_Bool)arg3;
- (id)createSuiteRunnerWithDelegate:(id)arg1;

@end

