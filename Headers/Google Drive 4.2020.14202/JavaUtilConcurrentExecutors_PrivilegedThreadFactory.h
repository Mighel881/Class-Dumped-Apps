//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentExecutors_DefaultThreadFactory.h"

@class JavaLangClassLoader;

@interface JavaUtilConcurrentExecutors_PrivilegedThreadFactory : JavaUtilConcurrentExecutors_DefaultThreadFactory
{
    JavaLangClassLoader *ccl_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)newThreadWithJavaLangRunnable:(id)arg1;
- (id)init;

@end

