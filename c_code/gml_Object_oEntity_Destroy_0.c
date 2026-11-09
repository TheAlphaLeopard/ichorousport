// gml_Object_oEntity_Destroy_0 @ 0x140ac24d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oEntity_Destroy_0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined4 uVar13;
  undefined8 **ppuVar12;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
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
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 local_90;
  undefined4 local_84;
  undefined1 local_80 [16];
  longlong local_70;
  
  local_res18 = 0;
  local_200 = "gml_Script_anon@19951@___struct___567@gml_Object_oEntity_Create_0";
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_1f8 = 0x376;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1a8,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_20c = 0xffffff;
  local_218 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_cc = 0xffffff;
  local_d8 = (undefined1 *)0x0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_23c = 0;
  local_248 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_84 = 0;
  local_90 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1f8 = 0x377;
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
  uStack_24c = 0;
  local_258 = (longlong *)&DAT_bff0000000000000;
  FUN_140042560(uVar6,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_1f8 = 0x379;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f0008);
  ppuVar14 = (undefined1 **)0x0;
  uVar6 = FUN_140e63610(local_res8,local_res10,&local_248,0,uVar7,0);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
    uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
    uStack_24c = 6;
    local_258 = local_res8;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_218,uVar7,uVar15);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 6;
    local_258 = local_res8;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_228,uVar7,uVar15 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_22c = uStack_20c;
    uStack_230 = uStack_210;
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_238 = local_218;
    }
    else {
      FUN_1400419b0(&local_238,&local_218);
    }
    local_res18 = 1;
    FUN_1400460e0(&local_238,uVar6);
    local_258 = (longlong *)local_238;
    uStack_250 = uStack_230;
    uStack_24c = uStack_22c;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_258);
    local_res18 = 0;
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_c8 = local_1a8;
    uStack_22c = uStack_21c;
    uStack_230 = uStack_220;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_238 = local_228;
    }
    else {
      FUN_1400419b0(&local_238,&local_228);
    }
    local_res18 = 2;
    FUN_1400460e0(&local_238,uVar8);
    local_258 = (longlong *)local_238;
    uStack_250 = uStack_230;
    uStack_24c = uStack_22c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_258);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_c0 = local_198;
    uStack_24c = 0xf;
    local_258 = (longlong *)0x100000000000149;
    local_238 = 0x100000000000149;
    uStack_230 = uStack_250;
    uStack_22c = 0xf;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_238);
    ppuVar14 = &local_c8;
    uVar7 = CONCAT44(uVar13,DAT_141a12628);
    local_b8 = &local_188;
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1b8,3,uVar7,ppuVar14);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 == '\0') goto LAB_140ac2f0b;
  }
  local_1f8 = 0x37b;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff338);
  uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419ef5a8,0x80000000,&local_d8,uVar7 & 0xffffffffffffff00,uVar15);
  local_258 = (longlong *)local_d8;
  uStack_250 = uStack_d0;
  uStack_24c = uStack_cc;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_258);
  local_b0 = &local_178;
  if (puVar9 != &local_168) {
    local_258 = (longlong *)*puVar9;
    uStack_250 = *(undefined4 *)(puVar9 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_258);
  }
  local_a8 = &local_168;
  ppuVar12 = &local_b0;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (local_res8,local_res10,&local_1c8,2,ppuVar12);
  local_1f8 = 0x37d;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f1f38);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_1f8 = 0x37e;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a06628);
    uStack_24c = 6;
    local_258 = local_res8;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar7 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_218,uVar7,uVar15);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uStack_24c = 6;
    local_258 = local_res8;
    FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_228,uVar7 & 0xffffffffffffff00,
                  uVar15 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = (longlong *)local_218;
    uStack_250 = uStack_210;
    uStack_24c = uStack_20c;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_258);
    local_c8 = local_1a8;
    local_258 = (longlong *)local_228;
    uStack_250 = uStack_220;
    uStack_24c = uStack_21c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_258);
    local_c0 = local_198;
    puVar10 = (undefined8 *)FUN_140e8da20(&local_1b8,local_res8,2,&DAT_1419eb3a0,&DAT_1419eb310);
    if (puVar10 != &local_188) {
      local_258 = (longlong *)*puVar10;
      uStack_250 = *(undefined4 *)(puVar10 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_258);
    }
    local_b8 = &local_188;
    puVar10 = (undefined8 *)FUN_140e8da20(&local_1c8,local_res8,2,&DAT_1419eb3b0,&DAT_1419eb370);
    if (puVar10 != &local_178) {
      local_258 = (longlong *)*puVar10;
      uStack_250 = *(undefined4 *)(puVar10 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_258);
    }
    local_b0 = &local_178;
    if (puVar9 != &local_168) {
      local_258 = (longlong *)*puVar9;
      uStack_250 = *(undefined4 *)(puVar9 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_258);
    }
    local_a8 = &local_168;
    puVar9 = (undefined8 *)FUN_140e8da20(&local_90,local_res8,2,&DAT_1419eb300,&DAT_1419eb320);
    if (puVar9 != &local_158) {
      local_258 = (longlong *)*puVar9;
      uStack_250 = *(undefined4 *)(puVar9 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_258);
    }
    local_a0 = &local_158;
    local_258 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_250 = DAT_1419df7b8;
    uStack_24c = DAT_1419df7bc;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_258);
    local_98 = local_148;
    gml_Script_get_blood_col(local_res8,local_res10,&local_248,7,&local_c8);
  }
  local_1f8 = 0x380;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f01e8);
  FUN_140e63610(local_res8,local_res10,&local_248,0,uVar4,0);
  local_1f8 = 0x381;
  FUN_140edd0e0(local_res8,local_res10,0,0);
LAB_140ac2f0b:
  local_1f8 = 900;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f10b8);
  FUN_140e63610(local_res8,local_res10,&local_248,0,uVar4,0);
  local_1f8 = 0x385;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
  uVar15 = 0;
  FUN_140e63610(local_res8,local_res10,&local_248,0,uVar7,0);
  local_1f8 = 0x387;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  uVar15 = uVar15 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_141a06248,0x80000000,&local_f8,uVar7,uVar15);
  uStack_24c = 0;
  local_258 = (longlong *)0x4028000000000000;
  uVar2 = FUN_140e851f0(&local_f8,&local_258,DAT_141955260,1);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (uVar2 < 0x80000000) {
    local_1f8 = 0x389;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a067b8,0x80000000,&local_108,uVar7,uVar15);
    uStack_24c = 0;
    local_258 = (longlong *)&DAT_bff0000000000000;
    FUN_140042560(&local_108,&local_258);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140e87930(uVar4,DAT_141a067b8,0x80000000,&local_108);
    local_1f8 = 0x38a;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    uStack_24c = 6;
    local_258 = local_res8;
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_218,uVar7,uVar15);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a067b8,0x80000000,&local_118,uVar7,uVar15);
    uStack_24c = 6;
    local_258 = local_res8;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_258,DAT_1419fe158,0x80000000,&local_228,uVar7,uVar15 & 0xffffffffffffff00);
    uVar13 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_258 = (longlong *)FUN_140e794b0(0,0);
    uStack_24c = 0;
    local_res18 = 0x80;
    FUN_140042560(&local_258,&local_118);
    uStack_22c = uStack_20c;
    uStack_230 = uStack_210;
    if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) == 0) {
      local_238 = local_218;
    }
    else {
      FUN_1400419b0(&local_238,&local_218);
    }
    local_res18 = 0x180;
    FUN_1400460e0(&local_238,&local_258);
    local_1d8 = (undefined4)local_238;
    uStack_1d4 = local_238._4_4_;
    uStack_1d0 = uStack_230;
    uStack_1cc = uStack_22c;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_1d8);
    local_res18 = 0x80;
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_res18 = 0;
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_c8 = local_1a8;
    uVar11 = FUN_140e794b0(0,0);
    uStack_22c = uStack_21c;
    uStack_230 = uStack_220;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
      local_238 = local_228;
    }
    else {
      FUN_1400419b0(&local_238,&local_228);
    }
    local_res18 = 0x200;
    FUN_140162c50(&local_238,uVar11);
    local_1d8 = (undefined4)local_238;
    uStack_1d4 = local_238._4_4_;
    uStack_1d0 = uStack_230;
    uStack_1cc = uStack_22c;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_1d8);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_c0 = local_198;
    local_1d8 = _DAT_141dd91d8;
    uStack_1d4 = uRam0000000141dd91dc;
    uStack_1d0 = uRam0000000141dd91e0;
    uStack_1cc = DAT_141dd91e4;
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1d8);
    uStack_24c = 0xf;
    local_258 = (longlong *)0x10000000000012d;
    local_1d8 = 0x12d;
    uStack_1d4 = 0x1000000;
    uStack_1d0 = uStack_250;
    uStack_1cc = 0xf;
    local_b8 = &local_188;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1d8);
    local_b0 = &local_178;
    ppuVar14 = &local_c8;
    uVar7 = CONCAT44(uVar13,DAT_141a0a7c8);
    uVar6 = FUN_140e634e0(local_res8,local_res10,&local_248,4,uVar7,ppuVar14);
    iVar3 = FUN_140e63cb0(local_80,&local_res8,&local_res10,uVar6);
    if (0 < iVar3) {
      do {
        local_1f8 = 0x38c;
        uStack_24c = 0xf;
        local_258 = (longlong *)0x100000100000062;
        local_1d8 = 0x62;
        uStack_1d4 = 0x1000001;
        uStack_1d0 = uStack_250;
        uStack_1cc = 0xf;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_1d8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_128);
        local_1f8 = 0x38d;
        uVar6 = (**(code **)(*local_res10 + 8))(local_res10,DAT_141a57250);
        ppuVar14 = (undefined1 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(uVar6,DAT_141a067b8,0x80000000,&local_e8,uVar7,ppuVar14);
        local_1d8 = (undefined4)local_e8;
        uStack_1d4 = local_e8._4_4_;
        uStack_1d0 = uStack_e0;
        uStack_1cc = uStack_dc;
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_1d8);
        FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_138);
        cVar1 = FUN_140e643f0(local_80,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_80,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a06248,0x80000000,&local_f8,uVar7,uVar15);
    uVar15 = uVar15 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_141a067b8,0x80000000,&local_118,uVar7,uVar15);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    local_1f8 = 0x38f;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    local_1e4 = 0;
    local_1f0 = 0;
    FUN_140e87930(uVar4,DAT_141a06248,0x80000000,&local_1f0);
    if (local_70 != 0) {
      FUN_140e4cd60();
    }
  }
  local_1f8 = 0x392;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  FUN_140e87440(uVar4,DAT_141a06248,0x80000000,&local_1f0,uVar7 & 0xffffffffffffff00,
                uVar15 & 0xffffffffffffff00);
  FUN_1400460e0(&local_1f0,uVar5);
  FUN_140e87930(uVar4,DAT_141a06248,0x80000000,&local_1f0);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
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
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  _eh_vector_destructor_iterator_(local_1a8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return param_3;
}

