//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBTransmitterDelegate-Protocol.h"

@interface DBTransmitterDelegateCppProxy : NSObject <DBTransmitterDelegate>
{
    struct Handle<std::__1::shared_ptr<dropbox::beacon::TransmitterDelegate>, std::__1::shared_ptr<dropbox::beacon::TransmitterDelegate>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)badTransmitterToken;
- (void)unauthorizedAgents:(id)arg1;
- (id)initWithCpp:(const shared_ptr_48463d58 *)arg1;

@end
