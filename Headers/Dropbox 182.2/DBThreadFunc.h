//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBThreadFunc : NSObject
{
    struct Handle<std::__1::shared_ptr<dropbox::thread::ThreadFunc>, std::__1::shared_ptr<dropbox::thread::ThreadFunc>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)run;
- (id)initWithCpp:(const shared_ptr_824da733 *)arg1;

@end
