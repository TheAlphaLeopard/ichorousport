// gml_Script____struct___649_gml_Object_oPlayer_Create_0 @ 0x140c080f0

undefined8 *
gml_Script____struct___649_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff40;
  undefined1 **ppuVar6;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_anon@18029@___struct___648@gml_Object_oPlayer_Create_0";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 0x38e;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,2,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_ac = 0;
  local_b8 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_28 = 0x38f;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f7db8,0x80000000,&local_98,uVar4,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_48 = (undefined4)local_98;
  uStack_44 = local_98._4_4_;
  uStack_40 = uStack_90;
  uStack_3c = uStack_8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_48);
  local_68 = local_88;
  ppuVar6 = &local_68;
  uVar4 = CONCAT44(uVar5,DAT_1419f59e8);
  uVar2 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar4,ppuVar6);
  cVar1 = FUN_140e491e0(uVar2);
  if (cVar1 != '\0') {
    local_28 = 0x390;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    uVar4 = uVar4 & 0xffffffffffffff00;
    FUN_140e87440(uVar2,DAT_1419f7db8,0x80000000,&local_98,uVar4,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    uVar5 = (undefined4)(uVar4 >> 0x20);
    local_48 = (undefined4)local_98;
    uStack_44 = local_98._4_4_;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_48);
    local_60 = local_78;
    ppuVar6 = &local_60;
    uVar4 = CONCAT44(uVar5,DAT_1419f5968);
    FUN_140e634e0(param_1,param_2,&local_a8,1,uVar4,ppuVar6);
  }
  local_28 = 0x391;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_1419f73b8,0x80000000,&local_58,uVar4,
                (ulonglong)ppuVar6 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  local_48 = (undefined4)local_58;
  uStack_44 = local_58._4_4_;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_48);
  local_68 = local_88;
  FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar5,DAT_141a07788),&local_68);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}

