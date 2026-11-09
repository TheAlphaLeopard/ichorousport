// gml_Script_anon_232_gml_Object_oTutorial_Create_0 @ 0x140df3750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_232_gml_Object_oTutorial_Create_0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong in_stack_fffffffffffffe80;
  ulonglong uVar8;
  undefined1 **ppuVar9;
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
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38 [2];
  
  local_d0 = "gml_Object_oTutClear_Step_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_c8 = 1;
  uStack_16c = 6;
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar8 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_f8,uVar8,in_stack_fffffffffffffe80);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  uStack_16c = 6;
  uVar8 = uVar8 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe158,0x80000000,&local_108,uVar8,
                in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar8 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = local_f8;
  uStack_170 = uStack_f0;
  uStack_16c = uStack_ec;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_178);
  local_178 = local_108;
  uStack_170 = uStack_100;
  uStack_16c = uStack_fc;
  local_58 = local_a8;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_178);
  local_50 = local_98;
  uStack_16c = 0xf;
  local_178 = 0x1000000000000ee;
  local_e8 = 0xee;
  uStack_e4 = 0x1000000;
  uStack_e0 = uStack_170;
  uStack_dc = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_48 = local_88;
  uVar5 = CONCAT44(uVar7,DAT_141a12628);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c0,3,uVar5,&local_58);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') goto LAB_140df3cc6;
  local_c8 = 3;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_16c = 0xf;
  local_178 = 0x1000000000000ff;
  local_e8 = 0xff;
  uStack_e4 = 0x1000000;
  uStack_e0 = uStack_170;
  uStack_dc = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  local_40 = local_78;
  ppuVar9 = &local_40;
  uVar8 = CONCAT44(uVar7,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_148,1,uVar8,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    cVar1 = FUN_140e491e0(uVar2);
    if (cVar1 == '\0') {
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      local_158 = 0;
      local_150 = 0;
      local_14c = 5;
      uStack_16c = 0xf;
      local_178 = 0x1000000000000ff;
      FUN_140e87440(&local_178,DAT_141a56b50,0x80000000,&local_118,uVar8 & 0xffffffffffffff00,
                    (ulonglong)ppuVar9 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      uStack_16c = 0xf;
      local_178 = 0x1000000000000ff;
      uVar2 = FUN_140069500(&local_178);
      uVar8 = 0;
      puVar6 = &local_118;
      uVar2 = FUN_140e63610(uVar2,param_2,&local_158,0,puVar6,0);
      ppuVar9 = (undefined1 **)(uVar8 & 0xffffffffffffff00);
      uVar8 = (ulonglong)puVar6 & 0xffffffffffffff00;
      FUN_140e87440(uVar2,DAT_1419f6118,0x80000000,&local_128,uVar8,ppuVar9);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      cVar1 = FUN_140e491e0(&local_128);
      if (cVar1 != '\0') goto LAB_140df3cad;
    }
    local_c8 = 4;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    uStack_16c = 0xf;
    local_178 = 0x1000000000000ff;
    FUN_140e87440(&local_178,DAT_1419fa178,0x80000000,&local_138,uVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_e8 = _DAT_1419df7c0;
    uStack_e4 = uRam00000001419df7c4;
    uStack_e0 = uRam00000001419df7c8;
    uStack_dc = uRam00000001419df7cc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_e8);
    local_38[0] = local_68;
    uStack_16c = 0xf;
    local_178 = 0x1000000000000ff;
    uVar2 = FUN_140069500(&local_178);
    FUN_140e63610(uVar2,param_2,&local_168,1,&local_138,local_38);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
  }
LAB_140df3cad:
  local_c8 = 6;
  FUN_140edd0e0(param_1,param_2,0,0);
LAB_140df3cc6:
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
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
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

