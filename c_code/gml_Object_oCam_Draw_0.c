// gml_Object_oCam_Draw_0 @ 0x140891210

void gml_Object_oCam_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  ulonglong in_stack_fffffffffffffe50;
  longlong *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  local_80 = "gml_Object_oCam_Other_11";
  local_78 = 0;
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  uStack_16c = 0xffffff;
  local_178 = (longlong *)0x0;
  uStack_15c = 0xffffff;
  local_168 = (longlong *)0x0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_78 = 2;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15fd8);
  uStack_19c = 6;
  in_stack_fffffffffffffe50 = in_stack_fffffffffffffe50 & 0xffffffffffffff00;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_158,uVar3,in_stack_fffffffffffffe50);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_198 = local_158;
  uStack_190 = uStack_150;
  uStack_18c = uStack_14c;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_198);
  local_70 = local_f8;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_178);
  local_198 = local_178;
  uStack_190 = uStack_170;
  uStack_18c = uStack_16c;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_198);
  local_68 = local_e8;
  uStack_19c = 6;
  uVar3 = uVar3 & 0xffffffffffffff00;
  local_1a8 = param_1;
  FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_168,uVar3,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_198 = local_168;
  uStack_190 = uStack_160;
  uStack_18c = uStack_15c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_198);
  local_60 = local_d8;
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_178);
  local_198 = local_178;
  uStack_190 = uStack_170;
  uStack_18c = uStack_16c;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_198);
  local_58 = local_c8;
  if (puVar1 != &local_b8) {
    local_198 = (longlong *)*puVar1;
    uStack_190 = *(undefined4 *)(puVar1 + 1);
    uStack_18c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_198);
  }
  local_50 = &local_b8;
  uVar4 = CONCAT44(uVar5,DAT_141a00c98);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar4,&local_68);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_19c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar1);
  }
  uStack_18c = 0;
  local_198 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_1a8,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uVar4 = CONCAT44(uVar5,DAT_1419fd658);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_118,1,uVar4,&local_70);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_180 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_188,puVar1);
  }
  FUN_1400462a0(&local_188,&local_1a8);
  local_198 = local_188;
  uStack_190 = uStack_180;
  uStack_18c = uStack_17c;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_198);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_48 = local_a8;
  uVar4 = CONCAT44(uVar5,DAT_141a00d58);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,1,uVar4,&local_58);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_180 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
    local_188 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_188,puVar1);
  }
  uStack_18c = 0;
  local_198 = (longlong *)0x4000000000000000;
  FUN_140046500(&local_188,&local_198);
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  uVar4 = CONCAT44(uVar5,DAT_1419fd658);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_138,1,uVar4,&local_60);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_19c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_1a0 = *(undefined4 *)(puVar1 + 1);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) == 0) {
    local_1a8 = (longlong *)*puVar1;
  }
  else {
    FUN_1400419b0(&local_1a8,puVar1);
  }
  FUN_1400462a0(&local_1a8,&local_188);
  local_198 = local_1a8;
  uStack_190 = uStack_1a0;
  uStack_18c = uStack_19c;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_198);
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_40 = local_98;
  FUN_140e634e0(param_1,param_2,&local_108,3,CONCAT44(uVar5,DAT_141a1bf90),&local_50);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return;
}

