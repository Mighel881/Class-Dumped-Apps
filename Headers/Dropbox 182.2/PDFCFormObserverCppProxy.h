//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PSPDFKit/PDFCFormObserver-Protocol.h>

@interface PDFCFormObserverCppProxy : NSObject <PDFCFormObserver>
{
    struct Handle<std::__1::shared_ptr<PDFC::FormObserver>, std::__1::shared_ptr<PDFC::FormObserver>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)formDidChangeFlags:(id)arg1 providerIndex:(int)arg2 widgetID:(int)arg3;
- (void)formDidChangeAction:(id)arg1 providerIndex:(int)arg2 widgetID:(int)arg3;
- (void)formDidAddFormField:(id)arg1 providerIndex:(int)arg2 formField:(id)arg3;
- (void)formDidChange:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3;
- (void)formDidReset:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3 widgetID:(int)arg4;
- (void)formTabOrderDidRecalculate:(id)arg1 providerIndex:(int)arg2;
- (void)formDidSetValue:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3;
- (void)formDidSetRichText:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3 widgetID:(int)arg4 richText:(id)arg5;
- (void)formDidSetText:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3 widgetID:(int)arg4 text:(id)arg5;
- (void)formDidSetMaxLength:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3 widgetID:(int)arg4 maxLength:(int)arg5;
- (void)formDidSetCustomOption:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3 widgetID:(int)arg4 customOption:(id)arg5;
- (void)formDidSelectOption:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3 widgetID:(int)arg4 selectedOption:(id)arg5;
- (void)formDidChangeButtonSelection:(id)arg1 providerIndex:(int)arg2 formFieldFQN:(id)arg3 widgetID:(int)arg4 checked:(_Bool)arg5;
- (id)initWithCpp:(const shared_ptr_683b46f8 *)arg1;

@end
