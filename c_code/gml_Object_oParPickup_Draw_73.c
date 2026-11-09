// gml_Object_oParPickup_Draw_73 @ 0x140bb8f50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oParPickup_Draw_73(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffdb0;
  undefined8 **ppuVar16;
  ulonglong uVar17;
  undefined8 local_248;
  undefined4 uStack_240;
  uint uStack_23c;
  longlong *local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  longlong *local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined8 local_218;
  undefined4 local_210;
  undefined4 local_20c;
  longlong *local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  longlong *local_1f8;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_198;
  byte local_18c;
  double local_188;
  undefined4 local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 *local_c8;
  double *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  
  local_1e0 = "gml_Object_oParPickup_Step_0";
  local_1d8 = 0;
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_198,0x10,9,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_1fc = 0xffffff;
  local_208 = (longlong *)0x0;
  uStack_1ec = 0xffffff;
  local_1f8 = (longlong *)0x0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_1a4 = 0xffffff;
  local_1b0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_1d8 = 2;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar8 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_21c = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_220 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
    local_228 = (longlong *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_228,puVar7);
  }
  FUN_140042560(&local_228,uVar5);
  FUN_1400460e0(uVar8,&local_228);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_1d8 = 4;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uStack_22c = 6;
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar12 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  local_238 = param_1;
  FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_208,uVar12,in_stack_fffffffffffffdb0);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_22c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_238 = param_1;
  FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_1f8,uVar12,
                in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_248 = local_208;
  uStack_240 = uStack_200;
  uStack_23c = uStack_1fc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_248);
  local_c8 = &local_198;
  uStack_21c = uStack_1ec;
  uStack_220 = uStack_1f0;
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_228 = local_1f8;
  }
  else {
    FUN_1400419b0(&local_228,&local_1f8);
  }
  uStack_22c = 7;
  local_238 = (longlong *)CONCAT44(local_238._4_4_,1);
  FUN_1400460e0(&local_228,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_248 = local_228;
  uStack_240 = uStack_220;
  uStack_23c = uStack_21c;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_248);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_c0 = &local_188;
  uStack_23c = 0xf;
  local_248 = (longlong *)0x100000000000149;
  local_238 = (longlong *)0x100000000000149;
  uStack_230 = uStack_240;
  uStack_22c = 0xf;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_238);
  ppuVar16 = &local_c8;
  uVar12 = CONCAT44(uVar15,DAT_141a12628);
  local_b8 = local_178;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_218,3,uVar12,ppuVar16);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b0);
    }
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a4 = 5;
    uStack_22c = 6;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_238 = param_1;
    FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_208,uVar12,uVar17);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uStack_22c = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_238 = param_1;
    FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_1f8,uVar12,uVar17 & 0xffffffffffffff00)
    ;
    uVar15 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_248 = local_208;
    uStack_240 = uStack_200;
    uStack_23c = uStack_1fc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_248);
    local_b0 = &local_168;
    uStack_21c = uStack_1ec;
    uStack_220 = uStack_1f0;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_228 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_228,&local_1f8);
    }
    uStack_22c = 7;
    local_238 = (longlong *)CONCAT44(local_238._4_4_,1);
    FUN_1400460e0(&local_228,&local_238);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_248 = local_228;
    uStack_240 = uStack_220;
    uStack_23c = uStack_21c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_248);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_a8 = local_158;
    uStack_23c = 0xf;
    local_248 = (longlong *)0x1000000000000ea;
    local_238 = (longlong *)0x1000000000000ea;
    uStack_230 = uStack_240;
    uStack_22c = 0xf;
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_238);
    local_a0 = local_148;
    ppuVar16 = &local_b0;
    uVar12 = CONCAT44(uVar15,DAT_141a12628);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_1b0,3,uVar12,ppuVar16);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 == '\0') goto LAB_140bba1ac;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_22c = 0;
    local_238 = (longlong *)0x0;
    iVar3 = FUN_140e851f0(uVar5,&local_238,DAT_141955260,1);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (iVar3 < 1) goto LAB_140bba1ac;
    if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c0);
    }
    local_1c0 = 0;
    local_1b8 = 0;
    local_1b4 = 5;
    uStack_22c = 6;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_238 = param_1;
    FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_208,uVar12,uVar17);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    uStack_22c = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_238 = param_1;
    FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_1f8,uVar12,uVar17 & 0xffffffffffffff00)
    ;
    uVar15 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_248 = local_208;
    uStack_240 = uStack_200;
    uStack_23c = uStack_1fc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_248);
    local_98 = &local_138;
    local_248 = local_1f8;
    uStack_240 = uStack_1f0;
    uStack_23c = uStack_1ec;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_248);
    local_90 = local_128;
    uStack_23c = 0xf;
    local_248 = (longlong *)0x1000000000000ea;
    local_238 = (longlong *)0x1000000000000ea;
    uStack_230 = uStack_240;
    uStack_22c = 0xf;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_238);
    local_88 = local_118;
    ppuVar16 = &local_98;
    uVar12 = CONCAT44(uVar15,DAT_141a12628);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_1c0,3,uVar12,ppuVar16);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 != '\0') goto LAB_140bba1ac;
  }
  local_1d8 = 6;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_1d8 = 7;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar7);
  }
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  *puVar7 = 0;
  local_1d8 = 9;
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_1d8 = 0xb;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a065f8);
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09918);
    uStack_22c = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_238 = param_1;
    FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_208,uVar12,
                  (ulonglong)ppuVar16 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if (puVar7 != &local_198) {
      local_248 = (longlong *)*puVar7;
      uStack_240 = *(undefined4 *)(puVar7 + 1);
      uStack_23c = *(uint *)((longlong)puVar7 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_248);
    }
    local_c8 = &local_198;
    local_1c4 = *(undefined4 *)((longlong)puVar9 + 0xc);
    local_1c8 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
      local_1d0 = (longlong *)*puVar9;
    }
    else {
      FUN_1400419b0(&local_1d0,puVar9);
    }
    uStack_23c = 7;
    local_248 = (longlong *)CONCAT44(local_248._4_4_,0x14);
    FUN_1400460e0(&local_1d0,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_22c = local_1c4;
    uStack_230 = local_1c8;
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) == 0) {
      local_238 = local_1d0;
    }
    else {
      FUN_1400419b0(&local_238,&local_1d0);
    }
    uStack_23c = 0;
    local_248 = (longlong *)0xbf947ae147ae147b;
    FUN_140042560(&local_238,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_21c = uStack_1fc;
    uStack_220 = uStack_200;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_228 = local_208;
    }
    else {
      FUN_1400419b0(&local_228,&local_208);
    }
    FUN_1400460e0(&local_228,&local_238);
    if ((uStack_21c & 0xffffff) == 0) {
      uVar13 = SUB84(local_228,0);
    }
    else {
      uVar13 = FUN_140e4b060(&local_228);
    }
    local_188 = (double)thunk_FUN_1412aae80(uVar13);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d0);
    }
    local_c0 = &local_188;
    local_248 = (longlong *)CONCAT44(uRam00000001419ec854,_DAT_1419ec850);
    uStack_240 = uRam00000001419ec858;
    uStack_23c = uRam00000001419ec85c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_248);
    local_b8 = local_178;
    FUN_140e609c0(param_1);
    ppuVar16 = &local_c8;
    uVar12 = CONCAT44(uVar15,DAT_141a00c58);
    puVar11 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_218,3,uVar12,ppuVar16);
    if (puVar11 != puVar10) {
      local_248 = (longlong *)*puVar11;
      uStack_240 = *(undefined4 *)(puVar11 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar11 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_248);
    }
    FUN_140e60910(1);
    local_1d8 = 0xc;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_218 = 0;
    local_210 = 0;
    local_20c = 5;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a09a78);
    uStack_23c = 6;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_208,uVar12,
                  (ulonglong)ppuVar16 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar12 >> 0x20);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (puVar10 != &local_198) {
      local_248 = (longlong *)*puVar10;
      uStack_240 = *(undefined4 *)(puVar10 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_248);
    }
    local_c8 = &local_198;
    uStack_22c = *(undefined4 *)((longlong)puVar9 + 0xc);
    uStack_230 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) == 0) {
      local_238 = (longlong *)*puVar9;
    }
    else {
      FUN_1400419b0(&local_238,puVar9);
    }
    uStack_23c = 0;
    local_248 = (longlong *)0xbf947ae147ae147b;
    FUN_140042560(&local_238,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_21c = uStack_1fc;
    uStack_220 = uStack_200;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_228 = local_208;
    }
    else {
      FUN_1400419b0(&local_228,&local_208);
    }
    FUN_1400460e0(&local_228,&local_238);
    if ((uStack_21c & 0xffffff) == 0) {
      uVar13 = SUB84(local_228,0);
    }
    else {
      uVar13 = FUN_140e4b060(&local_228);
    }
    dVar1 = (double)thunk_FUN_1412ac390(uVar13);
    dVar1 = dVar1 * 3.0 - 8.0;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_188 = dVar1;
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    local_c0 = &local_188;
    local_248 = (longlong *)CONCAT44(uRam00000001419ec854,_DAT_1419ec850);
    uStack_240 = uRam00000001419ec858;
    uStack_23c = uRam00000001419ec85c;
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_248);
    local_b8 = local_178;
    FUN_140e609c0(param_1);
    ppuVar16 = &local_c8;
    uVar12 = CONCAT44(uVar15,DAT_141a00c58);
    puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_218,3,uVar12,ppuVar16);
    if (puVar9 != puVar11) {
      local_248 = (longlong *)*puVar9;
      uStack_240 = *(undefined4 *)(puVar9 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar9 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar11);
      }
      FUN_140041b80(puVar11,&local_248);
    }
    FUN_140e60910(1);
    local_1d8 = 0xd;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    uStack_23c = 6;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_208,uVar12,uVar17);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_22c = uStack_1fc;
    uStack_230 = uStack_200;
    if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
      local_238 = local_208;
    }
    else {
      FUN_1400419b0(&local_238,&local_208);
    }
    FUN_1400460e0(&local_238,puVar7);
    local_248 = local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    (**(code **)(*param_1 + 8))(param_1,DAT_141a09918);
    (**(code **)(*param_1 + 8))(param_1,DAT_141a065f8);
    FUN_140e86c30(uVar5,DAT_1419fe0e8,0x80000000,&local_d8);
    local_1d8 = 0xe;
    uStack_23c = 6;
    ppuVar16 = (undefined8 **)(uVar17 & 0xffffffffffffff00);
    uVar12 = uVar12 & 0xffffffffffffff00;
    local_248 = param_1;
    FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_1f8,uVar12,ppuVar16);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_22c = uStack_1ec;
    uStack_230 = uStack_1f0;
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
      local_238 = local_1f8;
    }
    else {
      FUN_1400419b0(&local_238,&local_1f8);
    }
    FUN_1400460e0(&local_238,puVar10);
    local_248 = local_238;
    uStack_240 = uStack_230;
    uStack_23c = uStack_22c;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_248);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    (**(code **)(*param_1 + 8))(param_1,DAT_141a09a78);
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    FUN_140e86c30(uVar5,DAT_1419fe158,0x80000000,&local_e8);
    local_1d8 = 0x10;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a065f8);
    FUN_140046040(uVar5);
  }
LAB_140bba1ac:
  local_1d8 = 0x15;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_23c = 6;
  uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_208,uVar12,uVar17);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 6;
  uVar12 = uVar12 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_1f8,uVar12,uVar17 & 0xffffffffffffff00);
  uVar15 = (undefined4)(uVar12 >> 0x20);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((*(uint *)((longlong)puVar7 + 0xc) & 0xffffff) == 0) {
    uVar13 = (undefined4)*puVar7;
  }
  else {
    uVar13 = FUN_140e4b060(puVar7);
  }
  uVar13 = FUN_140e79500(uVar13);
  uStack_22c = uStack_1fc;
  uStack_230 = uStack_200;
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
    local_238 = local_208;
  }
  else {
    FUN_1400419b0(&local_238,&local_208);
  }
  FUN_140162c50(&local_238,uVar13);
  local_248 = local_238;
  uStack_240 = uStack_230;
  uStack_23c = uStack_22c;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  FUN_140041b80(&local_198,&local_248);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_c8 = &local_198;
  uStack_22c = uStack_1ec;
  uStack_230 = uStack_1f0;
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) == 0) {
    local_238 = local_1f8;
  }
  else {
    FUN_1400419b0(&local_238,&local_1f8);
  }
  uStack_23c = 7;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,1);
  FUN_1400460e0(&local_238,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = local_238;
  uStack_240 = uStack_230;
  uStack_23c = uStack_22c;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_248);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_c0 = &local_188;
  uStack_23c = 0xf;
  local_248 = (longlong *)0x100000000000149;
  local_238 = (longlong *)0x100000000000149;
  uStack_230 = uStack_240;
  uStack_22c = 0xf;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_238);
  local_b8 = local_178;
  uVar5 = FUN_140e634e0(param_1,param_2,&local_218,3,CONCAT44(uVar15,DAT_141a12628),&local_c8);
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 != '\0') {
    local_1d8 = 0x17;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    uStack_23c = 0;
    local_248 = (longlong *)&DAT_bff0000000000000;
    FUN_140042560(uVar5,&local_248);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
  }
  local_1d8 = 0x1b;
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_1d8 = 0x1e;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f64b8);
    uStack_23c = 0;
    local_248 = (longlong *)0x0;
    iVar3 = FUN_140e851f0(uVar5,&local_248,DAT_141955260,1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (0 < iVar3) {
      local_1d8 = 0x1f;
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f64c8);
      uVar5 = FUN_140046040(uVar5);
      uStack_23c = 0;
      local_248 = (longlong *)0x4020000000000000;
      uVar4 = FUN_140e851f0(uVar5,&local_248,DAT_141955260,1);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if (uVar4 < 0x80000000) {
        local_1d8 = 0x20;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f64c8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = 0;
        local_1d8 = 0x21;
        uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f64b8);
        FUN_1400bdd80(uVar5);
      }
    }
  }
  else {
    local_1d8 = 0x1c;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0x4000000000000000;
    local_1d8 = 0x1d;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f64c8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  local_1d8 = 0x25;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56c20);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
  puVar7 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_218,0,uVar5,0);
  if (puVar7 != &local_f8) {
    local_248 = (longlong *)*puVar7;
    uStack_240 = *(undefined4 *)(puVar7 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_248);
  }
  FUN_140e87930(uVar6,DAT_141a0d3e8,0x80000000,&local_f8);
  local_1d8 = 0x27;
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  local_218 = 0;
  local_210 = 0;
  local_20c = 5;
  uVar12 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  uVar17 = 0;
  FUN_140e63610(param_1,param_2,&local_218,0,uVar12,0);
  local_1d8 = 0x29;
  uStack_23c = 6;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_1f8,uVar12 & 0xffffffffffffff00,
                uVar17 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e85f80(param_1,DAT_141a00c48,0x80000000,&local_108);
  uStack_22c = local_fc;
  uStack_230 = local_100;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
    local_238 = local_108;
  }
  else {
    FUN_1400419b0(&local_238,&local_108);
  }
  uStack_23c = 7;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,0x20);
  FUN_1400460e0(&local_238,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  iVar3 = FUN_140e851f0(&local_1f8,&local_238,DAT_141955260,1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (0 < iVar3) {
    local_1d8 = 0x2b;
    puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a56bd0);
    if (puVar7 != &local_198) {
      local_248 = (longlong *)*puVar7;
      uStack_240 = *(undefined4 *)(puVar7 + 1);
      uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_248);
    }
    local_c8 = &local_198;
    FUN_140edd0e0(param_1,param_2,1,&local_c8);
    local_1d8 = 0x2c;
    FUN_140edd0e0(param_1,param_2,0,0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return;
}

