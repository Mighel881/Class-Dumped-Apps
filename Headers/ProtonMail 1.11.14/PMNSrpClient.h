//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PMNSrpClient : NSObject
{
    struct Handle<std::__1::shared_ptr<ProtonMail::SrpClient>, std::__1::shared_ptr<ProtonMail::SrpClient>> _cppRefHandle;
}

+ (id)generateVerifier:(int)arg1 modulusRepr:(id)arg2 hashedPasswordRepr:(id)arg3;
+ (id)generateProofs:(int)arg1 modulusRepr:(id)arg2 serverEphemeralRepr:(id)arg3 hashedPasswordRepr:(id)arg4;
+ (id)expandHash:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCpp:(const shared_ptr_e4479205 *)arg1;

@end
