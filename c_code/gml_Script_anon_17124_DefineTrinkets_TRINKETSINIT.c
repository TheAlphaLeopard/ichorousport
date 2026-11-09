// gml_Script_anon_17124_DefineTrinkets_TRINKETSINIT @ 0x1405f4450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_17124_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_50 = "gml_Script_anon@16827@DefineTrinkets@TRINKETSINIT";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x2a6;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x2a8;
  uStack_dc = 0xf;
  local_e8 = 0x1000000000000ee;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  FUN_140e87440(&local_e8,DAT_1419ff9c8,0x80000000,&local_98,uVar4,in_stack_ffffffffffffff00);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = 0xf;
  local_e8 = 0x1000000000000ee;
  in_stack_ffffffffffffff00 = in_stack_ffffffffffffff00 & 0xffffffffffffff00;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(&local_e8,DAT_1419ffcc8,0x80000000,&local_b8,uVar4,in_stack_ffffffffffffff00);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_f8 = local_98;
  uStack_f0 = uStack_90;
  uStack_ec = uStack_8c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  local_38 = local_78;
  uStack_dc = local_ac;
  uStack_e0 = local_b0;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
    local_e8 = local_b8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_b8);
  }
  uStack_ec = 7;
  local_f8 = CONCAT44(local_f8._4_4_,3);
  FUN_1400460e0(&local_e8,&local_f8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = local_e8;
  uStack_f0 = uStack_e0;
  uStack_ec = uStack_dc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_f8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_30 = local_68;
  puVar1 = (undefined8 *)FUN_140e79230(&local_d8,2,&local_38);
  if (puVar1 != &local_c8) {
    local_f8 = *puVar1;
    uStack_f0 = *(undefined4 *)(puVar1 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_f8);
  }
  uStack_ec = 0xf;
  local_f8 = 0x1000000000000ee;
  FUN_140e87930(&local_f8,DAT_1419ff9c8,0x80000000,&local_c8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_48 = 0x2a9;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uStack_ec = 0xf;
  local_f8 = 0x1000000000000ee;
  uVar4 = uVar4 & 0xffffffffffffff00;
  FUN_140e87440(&local_f8,DAT_1419ff9c8,0x80000000,&local_98,uVar4,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = CONCAT44(uRam00000001419e6a84,_DAT_1419e6a80);
  uStack_f0 = uRam00000001419e6a88;
  uStack_ec = uRam00000001419e6a8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_f8);
  local_40 = local_88;
  local_f8 = local_98;
  uStack_f0 = uStack_90;
  uStack_ec = uStack_8c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_f8);
  local_38 = local_78;
  uVar2 = FUN_140e634e0(param_1,param_2,&local_d8,2,CONCAT44(uVar5,DAT_1419fa0f8),&local_40);
  uStack_dc = 0;
  local_e8 = 0x4000000000000000;
  FUN_140042560(&local_e8,uVar2);
  local_f8 = local_e8;
  uStack_f0 = uStack_e0;
  uStack_ec = uStack_dc;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_f8);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_ec = 0xf;
  local_f8 = 0x1000000000000ee;
  FUN_140e87930(&local_f8,DAT_1419ff178,0x80000000,&local_a8);
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

