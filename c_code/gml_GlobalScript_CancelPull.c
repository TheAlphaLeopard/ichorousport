// gml_GlobalScript_CancelPull @ 0x14025b8f0

undefined8 *
gml_GlobalScript_CancelPull
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 **ppuVar6;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined1 *local_30;
  
  local_70 = "gml_Script_bm_string_height";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x24;
  _eh_vector_constructor_iterator_(local_e8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_fc = 0;
  local_108 = 0;
  local_10c = 0;
  local_118 = 0;
  uStack_13c = 0;
  local_148 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x25;
  uStack_170 = "gml_Script_bm_font_type";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_168 = 0x1a;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a46e28);
  uStack_13c = 5;
  local_148 = 0;
  local_168 = 0x1b;
  if (puVar4 != &local_148) {
    local_158 = *puVar4;
    uStack_150 = *(undefined4 *)(puVar4 + 1);
    uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
    FUN_140041b80(&local_148,&local_158);
  }
  uVar1 = uStack_13c;
  DAT_141dc7a50 = local_178;
  local_158 = local_148;
  uStack_150 = uStack_140;
  uStack_14c = uStack_13c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_158);
  local_58 = local_d8;
  uStack_14c = DAT_141dce094;
  uStack_150 = DAT_141dce090;
  if ((1 << ((byte)DAT_141dce094 & 0x1f) & 0x46U) == 0) {
    local_158 = DAT_141dce088;
  }
  else {
    FUN_1400419b0(&local_158,&DAT_141dce088);
  }
  uVar3 = uStack_14c;
  local_178 = (undefined8 *)local_158;
  uStack_170 = (char *)CONCAT44(uStack_14c,uStack_150);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_178);
  if ((1 << ((byte)uVar3 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_50 = local_c8;
  puVar4 = (undefined8 *)gml_Script____struct___117(param_1,param_2,&local_118,1,&local_58);
  if (puVar4 != &local_b8) {
    local_178 = (undefined8 *)*puVar4;
    uStack_170 = (char *)puVar4[1];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_178);
  }
  local_48 = &local_b8;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
LAB_14025bb9b:
    local_178 = (undefined8 *)*param_5;
    uStack_170 = (char *)param_5[1];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_178);
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 != &local_a8) goto LAB_14025bb9b;
  }
  local_40 = &local_a8;
  puVar4 = (undefined8 *)FUN_140e64420(param_1,param_2,&local_108,3,&local_50);
  if (puVar4 != &local_98) {
    local_178 = (undefined8 *)*puVar4;
    uStack_170 = (char *)puVar4[1];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_178);
  }
  local_38 = &local_98;
  local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_170 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_178);
  local_30 = local_88;
  ppuVar6 = &local_38;
  puVar4 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_f8,2,ppuVar6);
  if (puVar4 != &local_188) {
    local_178 = (undefined8 *)*puVar4;
    uStack_170 = (char *)puVar4[1];
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_178);
  }
  FUN_140e87440(&local_188,DAT_141a05018,0x80000000,&local_138,
                (ulonglong)ppuVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  switch(local_17c) {
  default:
switchD_14025bd04_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_188;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_188 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14025bd04_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_188);
    uVar5 = FUN_140e87250(uVar3);
  }
  puVar4 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_128,0,&local_138,0);
  if (puVar4 != param_3) {
    local_178 = (undefined8 *)*puVar4;
    uStack_170 = (char *)puVar4[1];
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_178);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

