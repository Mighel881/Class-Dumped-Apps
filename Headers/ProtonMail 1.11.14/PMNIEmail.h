//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PMNIEmail : NSObject
{
    struct Handle<std::__1::shared_ptr<ProtonMail::IEmail>, std::__1::shared_ptr<ProtonMail::IEmail>> _cppRefHandle;
}

+ (id)createInstance:(id)arg1 email:(id)arg2 group:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setGroup:(id)arg1;
- (id)getGroup;
- (id)getTypes;
- (id)getValue;
- (id)getParameter:(id)arg1;
- (id)initWithCpp:(const shared_ptr_7325480f *)arg1;

@end
