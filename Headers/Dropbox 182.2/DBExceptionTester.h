//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBExceptionTester : NSObject
{
    struct Handle<std::__1::shared_ptr<dropbox::product::dbapp::syncapi_code_gen::ExceptionTester>, std::__1::shared_ptr<dropbox::product::dbapp::syncapi_code_gen::ExceptionTester>> _cppRefHandle;
}

+ (id)create;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)testCallDuringCbUnwinding:(id)arg1;
- (void)testCbThrow:(id)arg1;
- (_Bool)testCbReturn:(id)arg1;
- (void)testThrowResponse;
- (void)testThrowArg;
- (_Bool)testReturn;
- (id)initWithCpp:(const shared_ptr_79d30dbf *)arg1;

@end
