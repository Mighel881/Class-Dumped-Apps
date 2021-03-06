//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaLangRefWeakReference, JavaUtilArrayList, JavaUtilConcurrentCopyOnWriteArrayList, JavaUtilLocale, JavaUtilLoggingLogManager, JavaUtilResourceBundle, NSString;

@interface JavaUtilLoggingLogger : NSObject
{
    JavaUtilLoggingLogManager *manager_;
    NSString *name_;
    JavaUtilConcurrentCopyOnWriteArrayList *handlers_;
    NSString *resourceBundleName_;
    // Error parsing type: AB, name: useParentHandlers_
    unsigned long long filter_;
    _Bool anonymous_;
    JavaUtilResourceBundle *catalog_;
    NSString *catalogName_;
    JavaUtilLocale *catalogLocale_;
    unsigned long long parent_;
    JavaUtilArrayList *kids_;
    unsigned long long levelObject_;
    // Error parsing type: Ai, name: levelValue_
    JavaLangRefWeakReference *callersClassLoaderRef_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)findSystemResourceBundleWithJavaUtilLocale:(id)arg1;
+ (id)getAnonymousLoggerWithNSString:(id)arg1;
+ (id)getAnonymousLogger;
+ (id)getPlatformLoggerWithNSString:(id)arg1;
+ (id)getLoggerWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getLoggerWithNSString:(id)arg1;
+ (id)demandLoggerWithNSString:(id)arg1 withNSString:(id)arg2 withIOSClass:(id)arg3;
+ (id)getGlobal;
- (void)dealloc;
- (void)__javaClone:(id)arg1;
- (id)getEffectiveResourceBundleName;
- (void)updateEffectiveLevel;
- (void)removeChildLoggerWithJavaUtilLoggingLogManager_LoggerWeakRef:(id)arg1;
- (void)doSetParentWithJavaUtilLoggingLogger:(id)arg1;
- (void)setParentWithJavaUtilLoggingLogger:(id)arg1;
- (id)getParent;
- (void)setupResourceInfoWithNSString:(id)arg1 withIOSClass:(id)arg2;
- (id)findResourceBundleWithNSString:(id)arg1 withBoolean:(_Bool)arg2;
- (_Bool)getUseParentHandlers;
- (void)setUseParentHandlersWithBoolean:(_Bool)arg1;
- (id)getHandlers;
- (void)removeHandlerWithJavaUtilLoggingHandler:(id)arg1;
- (void)addHandlerWithJavaUtilLoggingHandler:(id)arg1;
- (id)getName;
- (_Bool)isLoggableWithJavaUtilLoggingLevel:(id)arg1;
- (id)getLevel;
- (void)setLevelWithJavaUtilLoggingLevel:(id)arg1;
- (void)finestWithNSString:(id)arg1;
- (void)finerWithNSString:(id)arg1;
- (void)fineWithNSString:(id)arg1;
- (void)configWithNSString:(id)arg1;
- (void)infoWithNSString:(id)arg1;
- (void)warningWithNSString:(id)arg1;
- (void)severeWithNSString:(id)arg1;
- (void)throwingWithNSString:(id)arg1 withNSString:(id)arg2 withJavaLangThrowable:(id)arg3;
- (void)exitingWithNSString:(id)arg1 withNSString:(id)arg2 withId:(id)arg3;
- (void)exitingWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)enteringWithNSString:(id)arg1 withNSString:(id)arg2 withNSObjectArray:(id)arg3;
- (void)enteringWithNSString:(id)arg1 withNSString:(id)arg2 withId:(id)arg3;
- (void)enteringWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)logrbWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withJavaLangThrowable:(id)arg6;
- (void)logrbWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSObjectArray:(id)arg6;
- (void)logrbWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withId:(id)arg6;
- (void)logrbWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5;
- (void)doLogWithJavaUtilLoggingLogRecord:(id)arg1 withNSString:(id)arg2;
- (void)logpWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withJavaLangThrowable:(id)arg5;
- (void)logpWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSObjectArray:(id)arg5;
- (void)logpWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withId:(id)arg5;
- (void)logpWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withJavaLangThrowable:(id)arg3;
- (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withNSObjectArray:(id)arg3;
- (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2 withId:(id)arg3;
- (void)logWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2;
- (void)doLogWithJavaUtilLoggingLogRecord:(id)arg1;
- (void)logWithJavaUtilLoggingLogRecord:(id)arg1;
- (id)getFilter;
- (void)setFilterWithJavaUtilLoggingFilter:(id)arg1;
- (id)getResourceBundleName;
- (id)getResourceBundle;
- (void)checkPermission;
- (void)setLogManagerWithJavaUtilLoggingLogManager:(id)arg1;
- (id)initWithNSString:(id)arg1;
- (id)getCallersClassLoader;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withIOSClass:(id)arg3;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2;

@end

