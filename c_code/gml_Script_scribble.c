// gml_Script_scribble @ 0x140494cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_scribble(undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                   undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 **ppuVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong in_stack_ffffffffffffff30;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Script_scribble_whitelist_sprite";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 5;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf190) &&
     (_Init_thread_header(&DAT_141ddf190), DAT_141ddf190 == -1)) {
    DAT_141ddf198 = (longlong *)FUN_140e63aa0(DAT_1419f96d8);
    _Init_thread_footer(&DAT_141ddf190);
  }
  if (DAT_141ddc19f == '\0') {
    FUN_140e64380(DAT_141ddf198,"gml_Script_scribble_whitelist_sprite");
    FUN_140e64380(param_1,"gml_Script_scribble_whitelist_sprite");
  }
  local_48 = 7;
  if (DAT_141ddc19f == '\0') {
    DAT_141ddc19f = '\x01';
    puVar1 = (undefined8 *)(**(code **)(*DAT_141ddf198 + 0x10))(DAT_141ddf198,DAT_141a04cd8);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    local_b8 = (undefined4)DAT_1419df7b0;
    uStack_b4 = DAT_1419df7b0._4_4_;
    uStack_b0 = DAT_1419df7b8;
    uStack_ac = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_b8);
    local_38 = &local_88;
    ppuVar4 = &local_38;
    uVar2 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_c8,1,ppuVar4);
    in_stack_ffffffffffffff30 = in_stack_ffffffffffffff30 & 0xffffffffffffff00;
    pcVar3 = (code *)((ulonglong)ppuVar4 & 0xffffffffffffff00);
    FUN_140e87440(uVar2,DAT_141a05158,0x80000000,&local_a8,pcVar3,in_stack_ffffffffffffff30);
    FUN_140e609c0(DAT_141ddf198);
    if (&local_a8 != puVar1) {
      local_b8 = (undefined4)local_a8;
      uStack_b4 = local_a8._4_4_;
      uStack_b0 = uStack_a0;
      uStack_ac = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_b8);
    }
    FUN_140e60910(1);
  }
  local_48 = 9;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar2 = (**(code **)(*DAT_141ddf198 + 8))(DAT_141ddf198,DAT_141a04cd8);
  uVar5 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(uVar2,DAT_141a08e38,0x80000000,&local_68,uVar5,
                in_stack_ffffffffffffff30 & 0xffffffffffffff00);
  uVar6 = (undefined4)(uVar5 >> 0x20);
  local_b8 = (undefined4)local_68;
  uStack_b4 = local_68._4_4_;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_b8);
  local_40 = local_98;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_88) goto LAB_140494fda;
  }
  local_b8 = *(undefined4 *)param_5;
  uStack_b4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_b0 = *(undefined4 *)(param_5 + 1);
  uStack_ac = *(undefined4 *)((longlong)param_5 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140041b80(&local_88,&local_b8);
LAB_140494fda:
  local_38 = &local_88;
  local_b8 = _DAT_1419df7c0;
  uStack_b4 = uRam00000001419df7c4;
  uStack_b0 = uRam00000001419df7c8;
  uStack_ac = uRam00000001419df7cc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_b8);
  local_30 = local_78;
  FUN_140e634e0(param_1,param_2,&local_c8,3,CONCAT44(uVar6,DAT_1419ff3d8),&local_40);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

