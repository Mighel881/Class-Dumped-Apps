//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKDialogModel-Protocol.h"

@class GDKDialogAction, NSString;

@interface GDKTextFieldDialogModel : NSObject <GDKDialogModel>
{
    _Bool _excludeFileExtensionInSelectedTextRange;
    _Bool _enableConfirmAnimation;
    _Bool _enableCancelAnimation;
    NSString *_title;
    GDKDialogAction *_cancelAction;
    GDKDialogAction *_confirmAction;
    NSString *_subtitle;
    NSString *_textFieldText;
    NSString *_textFieldPlaceholderText;
    NSString *_textFieldA11yText;
    long long _textFieldAutocapitalizationType;
    long long _textFieldAutocorrectionType;
}

+ (id)titleForRenamingFileOrFolder:(_Bool)arg1 isShortcut:(_Bool)arg2;
+ (id)modelForRenameFileOrFolder:(_Bool)arg1 isShortcut:(_Bool)arg2 textFieldText:(id)arg3 cancelActionHandler:(CDUnknownBlockType)arg4 confirmActionHandler:(CDUnknownBlockType)arg5;
+ (id)modelForCreateFolderWithCancelActionHandler:(CDUnknownBlockType)arg1 confirmActionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool enableCancelAnimation; // @synthesize enableCancelAnimation=_enableCancelAnimation;
@property(readonly, nonatomic) _Bool enableConfirmAnimation; // @synthesize enableConfirmAnimation=_enableConfirmAnimation;
@property(readonly, nonatomic) _Bool excludeFileExtensionInSelectedTextRange; // @synthesize excludeFileExtensionInSelectedTextRange=_excludeFileExtensionInSelectedTextRange;
@property(readonly, nonatomic) long long textFieldAutocorrectionType; // @synthesize textFieldAutocorrectionType=_textFieldAutocorrectionType;
@property(readonly, nonatomic) long long textFieldAutocapitalizationType; // @synthesize textFieldAutocapitalizationType=_textFieldAutocapitalizationType;
@property(readonly, copy, nonatomic) NSString *textFieldA11yText; // @synthesize textFieldA11yText=_textFieldA11yText;
@property(readonly, copy, nonatomic) NSString *textFieldPlaceholderText; // @synthesize textFieldPlaceholderText=_textFieldPlaceholderText;
@property(readonly, copy, nonatomic) NSString *textFieldText; // @synthesize textFieldText=_textFieldText;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) GDKDialogAction *confirmAction; // @synthesize confirmAction=_confirmAction;
@property(readonly, nonatomic) GDKDialogAction *cancelAction; // @synthesize cancelAction=_cancelAction;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 textFieldText:(id)arg3 textFieldPlaceholderText:(id)arg4 textFieldA11yText:(id)arg5 textFieldAutocapitalizationType:(long long)arg6 textFieldAutocorrectionType:(long long)arg7 excludeFileExtensionInSelectedTextRange:(_Bool)arg8 cancelAction:(id)arg9 confirmAction:(id)arg10 enableConfirmAnimation:(_Bool)arg11 enableCancelAnimation:(_Bool)arg12;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 textFieldText:(id)arg3 textFieldPlaceholderText:(id)arg4 textFieldA11yText:(id)arg5 excludeFileExtensionInSelectedTextRange:(_Bool)arg6 cancelAction:(id)arg7 confirmAction:(id)arg8 enableConfirmAnimation:(_Bool)arg9 enableCancelAnimation:(_Bool)arg10;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 textFieldText:(id)arg3 textFieldPlaceholderText:(id)arg4 textFieldA11yText:(id)arg5 cancelAction:(id)arg6 confirmAction:(id)arg7 enableConfirmAnimation:(_Bool)arg8 enableCancelAnimation:(_Bool)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

