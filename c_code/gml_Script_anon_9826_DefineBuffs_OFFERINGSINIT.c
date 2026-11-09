// gml_Script_anon_9826_DefineBuffs_OFFERINGSINIT @ 0x1403caba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_9826_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_120 = "gml_Script_anon@9547@DefineBuffs@OFFERINGSINIT";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x161;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_d8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_ec = 0xffffff;
  local_f8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_15c = 0;
  local_168 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x162;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
  FUN_140e87440(uVar2,DAT_1419f6208,0x80000000,&local_f8,(ulonglong)pcVar4 & 0xffffffffffffff00,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  cVar1 = FUN_140e491e0(&local_f8);
  if (cVar1 == '\0') {
    local_118 = 0x164;
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    uStack_16c = *(undefined4 *)((longlong)param_5 + 0xc);
    uStack_170 = *(undefined4 *)(param_5 + 1);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) == 0) {
      local_178 = *param_5;
    }
    else {
      FUN_1400419b0(&local_178);
    }
    uStack_17c = 7;
    local_188 = CONCAT44(local_188._4_4_,10);
    FUN_140042560(&local_178,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = local_178;
    uStack_180 = uStack_170;
    uStack_17c = uStack_16c;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_188);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_118 = 0x165;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uStack_17c = 0xf;
    local_188 = 0x1000000000000ee;
    FUN_140e87170(&local_188,DAT_1419fe0e8,0x80000000,&local_108,param_1,param_2);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    uStack_17c = 0xf;
    local_188 = 0x1000000000000ee;
    FUN_140e87170(&local_188,DAT_1419fe158,0x80000000,&local_158,param_1,param_2);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = local_108;
    uStack_180 = uStack_100;
    uStack_17c = uStack_fc;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_188);
    local_68 = local_d8;
    uStack_16c = local_14c;
    uStack_170 = local_150;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) == 0) {
      local_178 = local_158;
    }
    else {
      FUN_1400419b0(&local_178,&local_158);
    }
    uStack_17c = 7;
    local_188 = CONCAT44(local_188._4_4_,4);
    FUN_1400462a0(&local_178,&local_188);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = local_178;
    uStack_180 = uStack_170;
    uStack_17c = uStack_16c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_188);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_60 = local_c8;
    puVar3 = (undefined8 *)FUN_140e8da20(&local_e8,param_1,2,&DAT_141dc6550,&DAT_1419e4900);
    if (puVar3 != &local_b8) {
      local_188 = *puVar3;
      uStack_180 = *(undefined4 *)(puVar3 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_188);
    }
    local_188 = CONCAT44(uRam00000001419e48d4,_DAT_1419e48d0);
    uStack_180 = uRam00000001419e48d8;
    uStack_17c = uRam00000001419e48dc;
    local_58 = &local_b8;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_188);
    local_50 = local_a8;
    local_48 = &local_138;
    local_188 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_180 = DAT_1419df7b8;
    uStack_17c = DAT_1419df7bc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_188);
    local_40 = local_88;
    local_188 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_180 = DAT_1419df7b8;
    uStack_17c = DAT_1419df7bc;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_188);
    local_38 = local_78;
    gml_Script_get_blood_col(param_1,param_2,&local_168,7,&local_68);
    local_118 = 0x166;
    local_188 = 0x3ff0000000000000;
    uStack_17c = 0xd;
    local_178 = 0x3ff0000000000000;
    uStack_170 = uStack_180;
    uStack_16c = 0xd;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    FUN_140e87930(uVar2,DAT_1419f6208,0x80000000,&local_148);
  }
  else {
    local_118 = 0x162;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

