// gml_Object_oBodyPartToss_Create_0 @ 0x1406f3f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBodyPartToss_Create_0(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong **pplVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined4 uVar18;
  ulonglong uVar15;
  longlong *plVar16;
  uint **ppuVar17;
  uint **in_stack_fffffffffffffdb0;
  ulonglong uVar19;
  uint **ppuVar20;
  longlong *local_248;
  uint uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  longlong *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  uint uStack_210;
  uint uStack_20c;
  longlong *local_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined8 local_1f8;
  char *local_1f0;
  undefined4 local_1e8;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  longlong *local_1c8;
  undefined4 uStack_1c0;
  uint uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  uint local_1a8 [3];
  byte local_19c;
  uint local_198 [3];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  uint local_178 [3];
  byte local_16c;
  uint local_168 [3];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  uint local_148 [4];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint *local_108;
  uint *local_100;
  undefined1 *local_f8;
  uint *local_f0;
  uint *local_e8;
  undefined1 *local_e0;
  uint *local_d8;
  undefined1 *local_d0;
  uint local_c8 [3];
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  uint local_ac;
  uint local_a8 [3];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  
  local_1f0 = "gml_Object_oBodyPart_Step_0";
  local_1e8 = 0;
  local_1f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1f8;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_1a8,0x10,8,FUN_1400424d0,FUN_140041b30);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_ac = 0xffffff;
  local_b8 = (longlong *)0x0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = (longlong *)0x0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57cc0);
  local_bc = 0xffffff;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_9c = 0xffffff;
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1e8 = 3;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04c38);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 != '\0') {
    local_1e8 = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04bd8);
    uStack_21c = 0;
    local_228 = (longlong *)0x0;
    iVar3 = FUN_140e851f0(uVar7,&local_228,DAT_141955260,1);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    if (iVar3 == -2 || -1 < iVar3) {
      local_1e8 = 0x11;
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bd8);
      FUN_140e609c0(param_1);
      FUN_1400460e0(uVar7,uVar5);
      FUN_140e60910(1);
      local_1e8 = 0x12;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04bd8);
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04c78);
      uStack_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
      uStack_200 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
        local_208 = (longlong *)*puVar8;
      }
      else {
        FUN_1400419b0(&local_208,puVar8);
      }
      FUN_140046500(&local_208,uVar7);
      local_218 = local_208;
      uStack_210 = uStack_200;
      uStack_20c = uStack_1fc;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_218);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      local_1e8 = 0x13;
      uStack_21c = 0;
      local_228 = (longlong *)0x3ff0000000000000;
      uVar4 = FUN_140e851f0(&local_b8,&local_228,DAT_141955260,1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if (0x7fffffff < uVar4) {
        local_1e8 = 0x1d;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uVar18 = (undefined4)((ulonglong)pcVar14 >> 0x20);
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uStack_21c = 0;
        local_228 = (longlong *)0xc012000000000000;
        FUN_140042560(&local_228,&local_b8);
        local_218 = local_228;
        uStack_210 = uStack_220;
        uStack_20c = uStack_21c;
        if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_218);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_108 = local_1a8;
        uStack_1bc = local_ac;
        uStack_1c0 = local_b0;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) == 0) {
          local_1c8 = local_b8;
        }
        else {
          FUN_1400419b0(&local_1c8,&local_b8);
        }
        uStack_23c = 0;
        local_248 = (longlong *)0x400921fb54442d18;
        FUN_140042560(&local_1c8,&local_248);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_1fc = uStack_1bc;
        uStack_200 = uStack_1c0;
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
          local_208 = local_1c8;
        }
        else {
          FUN_1400419b0(&local_208,&local_1c8);
        }
        uStack_23c = 0;
        local_248 = (longlong *)0x400c000000000000;
        FUN_140042560(&local_208,&local_248);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        if ((uStack_1fc & 0xffffff) == 0) {
          uVar13 = SUB84(local_208,0);
        }
        else {
          uVar13 = FUN_140e4b060(&local_208);
        }
        plVar16 = (longlong *)thunk_FUN_1412ac390(uVar13);
        in_stack_fffffffffffffdb0 = &local_108;
        pcVar14 = (code *)CONCAT44(uVar18,DAT_141a04cc8);
        puVar8 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_238,1,pcVar14,in_stack_fffffffffffffdb0);
        uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
        uStack_220 = *(undefined4 *)(puVar8 + 1);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
          local_228 = (longlong *)*puVar8;
        }
        else {
          FUN_1400419b0(&local_228,puVar8);
        }
        uStack_23c = 0;
        local_248 = plVar16;
        FUN_140042560(&local_228,&local_248);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_218 = local_228;
        uStack_210 = uStack_220;
        uStack_20c = uStack_21c;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_218);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1e8 = 0x1e;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04bf8);
        pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bc8);
        FUN_140e609c0(param_1);
        uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
        uStack_220 = *(undefined4 *)(puVar8 + 1);
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
          local_228 = (longlong *)*puVar8;
        }
        else {
          FUN_1400419b0(&local_228,puVar8);
        }
        FUN_140042560(&local_228,&local_88);
        uStack_1fc = 0;
        local_208 = (longlong *)0x3ff0000000000000;
        FUN_1400460e0(&local_208,&local_228);
        if (&local_208 != pplVar9) {
          local_218 = local_208;
          uStack_210 = uStack_200;
          uStack_20c = uStack_1fc;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar9);
          }
          FUN_140041b80(pplVar9,&local_218);
        }
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140e60910(1);
        local_1e8 = 0x1f;
        pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c08);
        FUN_140e609c0(param_1);
        uStack_1bc = *(undefined4 *)((longlong)puVar8 + 0xc);
        uStack_1c0 = *(undefined4 *)(puVar8 + 1);
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
          local_1c8 = (longlong *)*puVar8;
        }
        else {
          FUN_1400419b0(&local_1c8,puVar8);
        }
        uStack_23c = 0;
        local_248 = (longlong *)0x3fe999999999999a;
        FUN_140042560(&local_1c8,&local_248);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_21c = uStack_1bc;
        uStack_220 = uStack_1c0;
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
          local_228 = local_1c8;
        }
        else {
          FUN_1400419b0(&local_228,&local_1c8);
        }
        FUN_140042560(&local_228,&local_88);
        uStack_1fc = 0;
        local_208 = (longlong *)0x3ff0000000000000;
        FUN_1400462a0(&local_208,&local_228);
        if (&local_208 != pplVar9) {
          local_218 = local_208;
          uStack_210 = uStack_200;
          uStack_20c = uStack_1fc;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar9);
          }
          FUN_140041b80(pplVar9,&local_218);
        }
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140e60910(1);
        local_1e8 = 0x20;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04be8);
        pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bb8);
        FUN_140e609c0(param_1);
        uStack_1fc = *(undefined4 *)((longlong)puVar8 + 0xc);
        uStack_200 = *(undefined4 *)(puVar8 + 1);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
          local_208 = (longlong *)*puVar8;
        }
        else {
          FUN_1400419b0(&local_208,puVar8);
        }
        FUN_140042560(&local_208,&local_88);
        if (&local_208 != pplVar9) {
          local_218 = local_208;
          uStack_210 = uStack_200;
          uStack_20c = uStack_1fc;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar9);
          }
          FUN_140041b80(pplVar9,&local_218);
        }
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        goto LAB_1406f4d0d;
      }
      local_1e8 = 0x15;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bd8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = &DAT_bff0000000000000;
      local_1e8 = 0x16;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04ca8);
      uVar7 = FUN_140e78f40(0x14);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = uVar7;
      local_1e8 = 0x17;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bc8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0x3ff0000000000000;
      local_1e8 = 0x18;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c08);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0x3ff0000000000000;
      local_1e8 = 0x19;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bb8);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
      *puVar8 = 0;
    }
    else {
      local_1e8 = 7;
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a04ca8);
      FUN_140e609c0(param_1);
      FUN_1400462a0(uVar7,uVar5);
      FUN_140e60910(1);
      local_1e8 = 8;
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04ca8);
      uStack_21c = 0;
      local_228 = (longlong *)0x0;
      iVar3 = FUN_140e851f0(uVar7,&local_228,DAT_141955260,1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      if (iVar3 != -2 && iVar3 < 1) {
        local_1e8 = 10;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bd8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0;
        local_1e8 = 0xb;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04bf8);
        uVar7 = FUN_140e794b0(0x70a3d70a,0x3fd3333333333333);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = uVar7;
        local_1e8 = 0xc;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04be8);
        local_218 = (longlong *)CONCAT44(uRam00000001419e7b04,_DAT_1419e7b00);
        uStack_210 = uRam00000001419e7b08;
        uStack_20c = uRam00000001419e7b0c;
        if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_218);
        local_108 = local_1a8;
        local_218 = (longlong *)CONCAT44(uRam00000001419e7b14,_DAT_1419e7b10);
        uStack_210 = uRam00000001419e7b18;
        uStack_20c = uRam00000001419e7b1c;
        if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_218);
        local_100 = local_198;
        FUN_140e609c0(param_1);
        uVar7 = FUN_140e78db0(&local_238,2,&local_108);
        local_228 = (longlong *)FUN_140e794b0(0,0x402c000000000000);
        uStack_21c = 0;
        FUN_140042560(&local_228,uVar7);
        if (&local_228 != pplVar9) {
          local_218 = local_228;
          uStack_210 = uStack_220;
          uStack_20c = uStack_21c;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar9);
          }
          FUN_140041b80(pplVar9,&local_218);
        }
        if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
LAB_1406f4d0d:
        FUN_140e60910(1);
      }
    }
  }
  local_1e8 = 0x25;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uStack_23c = 6;
  uVar19 = (ulonglong)in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_118,uVar15,uVar19);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_128,uVar15,uVar19 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_218 = (longlong *)local_118;
  uStack_210 = uStack_110;
  uStack_20c = uStack_10c;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_218);
  local_108 = local_1a8;
  local_218 = local_128;
  uStack_210 = uStack_120;
  uStack_20c = uStack_11c;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_218);
  local_100 = local_198;
  uStack_23c = 0xf;
  local_248 = (longlong *)0x100000000000150;
  local_218 = (longlong *)0x100000000000150;
  uStack_210 = uStack_240;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_218);
  local_f8 = local_188;
  ppuVar17 = &local_108;
  uVar15 = CONCAT44(uVar18,DAT_141a124c8);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,3,uVar15,ppuVar17);
  if (puVar8 != &local_98) {
    local_218 = (longlong *)*puVar8;
    uStack_210 = *(uint *)(puVar8 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_218);
  }
  local_1e8 = 0x27;
  cVar2 = FUN_140e491e0(&local_98);
  if (cVar2 != '\0') {
    local_1e8 = 0x28;
    pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c58);
    uStack_23c = 0xd;
    local_248 = (longlong *)0x3ff0000000000000;
    if (&local_248 != pplVar9) {
      local_218 = (longlong *)0x3ff0000000000000;
      uStack_210 = uStack_240;
      uStack_20c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pplVar9);
      }
      FUN_140041b80(pplVar9,&local_218);
    }
  }
  local_1e8 = 0x2a;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04c48);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 != '\0') {
    local_1e8 = 0x2c;
    uVar6 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
    uStack_21c = 0;
    local_228 = (longlong *)0x3f847ae147ae147b;
    FUN_140042560(&local_228,uVar5);
    FUN_1400462a0(uVar6,&local_228);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_1e8 = 0x2d;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
    FUN_140e609c0(param_1);
    if (puVar8 != puVar10) {
      local_218 = (longlong *)*puVar8;
      uStack_210 = *(uint *)(puVar8 + 1);
      uStack_20c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_218);
    }
    FUN_140e60910(1);
    local_1e8 = 0x2e;
    uStack_23c = 0;
    local_248 = (longlong *)0x3fb999999999999a;
    iVar3 = FUN_140e851f0(puVar8,&local_248,DAT_141955260,1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (iVar3 != -2 && iVar3 < 0) {
      local_1e8 = 0x2f;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a0a748);
      FUN_140edd0e0(param_1,param_2,0,0);
    }
    local_1e8 = 0x30;
    goto LAB_1406f66d7;
  }
  local_1e8 = 0x33;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04c58);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 != '\0') {
    local_1e8 = 0x36;
    cVar2 = FUN_140e491e0(&local_98);
    if (cVar2 != '\0') {
      local_1e8 = 0x38;
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_238 = 0;
      local_230 = 0;
      local_22c = 5;
      uStack_23c = 6;
      local_248 = param_1;
      FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_118,uVar15 & 0xffffffffffffff00,
                    (ulonglong)ppuVar17 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      plVar16 = param_1;
      FUN_140e87170(&local_98,DAT_141a0a788,0x80000000,&local_78,param_1,param_2);
      uVar18 = (undefined4)((ulonglong)plVar16 >> 0x20);
      local_218 = (longlong *)local_118;
      uStack_210 = uStack_110;
      uStack_20c = uStack_10c;
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_218);
      local_108 = local_1a8;
      uStack_21c = local_6c;
      uStack_220 = local_70;
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) == 0) {
        local_228 = local_78;
      }
      else {
        FUN_1400419b0(&local_228,&local_78);
      }
      uStack_23c = 7;
      local_248 = (longlong *)CONCAT44(local_248._4_4_,3);
      FUN_1400460e0(&local_228,&local_248);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_218 = local_228;
      uStack_210 = uStack_220;
      uStack_20c = uStack_21c;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_218);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_100 = local_198;
      local_218 = (longlong *)CONCAT44(uRam0000000141dd5f5c,_DAT_141dd5f58);
      uStack_210 = uRam0000000141dd5f60;
      uStack_20c = DAT_141dd5f64;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_188);
      }
      FUN_140041b80(local_188,&local_218);
      local_f8 = local_188;
      uStack_23c = 0xf;
      local_248 = (longlong *)0x100000000000002;
      local_218 = (longlong *)0x100000000000002;
      uStack_210 = uStack_240;
      uStack_20c = 0xf;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_218);
      local_f0 = local_178;
      FUN_140e634e0(param_1,param_2,&local_238,4,CONCAT44(uVar18,DAT_141a0a7c8),&local_108);
      local_1e8 = 0x39;
      FUN_140edd0e0(param_1,param_2,0,0);
    }
    local_1e8 = 0x3c;
    goto LAB_1406f66d7;
  }
  local_1e8 = 0x40;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uStack_23c = 6;
  uVar19 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_118,uVar15,uVar19);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 6;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_248 = param_1;
  FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_128,uVar15,uVar19 & 0xffffffffffffff00);
  uVar18 = (undefined4)(uVar15 >> 0x20);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_218 = (longlong *)local_118;
  uStack_210 = uStack_110;
  uStack_20c = uStack_10c;
  if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_218);
  local_108 = local_1a8;
  uStack_21c = uStack_11c;
  uStack_220 = uStack_120;
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) == 0) {
    local_228 = local_128;
  }
  else {
    FUN_1400419b0(&local_228,&local_128);
  }
  uStack_23c = 7;
  local_248 = (longlong *)CONCAT44(local_248._4_4_,2);
  FUN_1400460e0(&local_228,&local_248);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_218 = local_228;
  uStack_210 = uStack_220;
  uStack_20c = uStack_21c;
  if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_218);
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_100 = local_198;
  uStack_23c = 0xf;
  local_248 = (longlong *)0x100000000000149;
  local_218 = (longlong *)0x100000000000149;
  uStack_210 = uStack_240;
  uStack_20c = 0xf;
  if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_218);
  local_f8 = local_188;
  uVar11 = CONCAT44(uVar18,DAT_141a12628);
  uVar7 = FUN_140e634e0(param_1,param_2,&local_238,3,uVar11,&local_108);
  uVar18 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar2 = FUN_140e491e0(uVar7);
  if (cVar2 == '\0') {
LAB_1406f5a06:
    local_1e8 = 0x4f;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c88);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
    local_1e8 = 0x50;
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_21c = 0;
    local_228 = (longlong *)0x3fc999999999999a;
    FUN_140042560(&local_228,uVar5);
    FUN_1400460e0(uVar7,&local_228);
    if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_1e8 = 0x51;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
    if ((*(uint *)((longlong)puVar8 + 0xc) & 0xffffff) == 0) {
      uVar13 = (undefined4)*puVar8;
    }
    else {
      uVar13 = FUN_140e4b060(puVar8);
    }
    dVar1 = (double)FUN_1412a79b0(uVar13,0x4024000000000000);
    if (dVar1 == 0.0) {
      local_1e8 = 0x53;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04c68);
      uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
      uStack_21c = *(undefined4 *)((longlong)puVar8 + 0xc);
      uStack_220 = *(undefined4 *)(puVar8 + 1);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) == 0) {
        local_228 = (longlong *)*puVar8;
      }
      else {
        FUN_1400419b0(&local_228,puVar8);
      }
      FUN_140042560(&local_228,uVar5);
      FUN_1400460e0(uVar7,&local_228);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      local_1e8 = 0x55;
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 != '\0') {
        local_1e8 = 0x56;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uVar19 = 0;
        uVar15 = CONCAT44(uVar18,DAT_1419ef5d8);
        puVar12 = (uint *)FUN_140e634e0(param_1,param_2,&local_238,0,uVar15,0);
        if (puVar12 != local_c8) {
          local_218 = *(longlong **)puVar12;
          uStack_210 = puVar12[2];
          uStack_20c = puVar12[3];
          if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_218);
        }
        local_1e8 = 0x57;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        uStack_23c = 6;
        uVar19 = uVar19 & 0xffffffffffffff00;
        uVar15 = uVar15 & 0xffffffffffffff00;
        local_248 = param_1;
        FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_118,uVar15,uVar19);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        uStack_23c = 6;
        uVar15 = uVar15 & 0xffffffffffffff00;
        local_248 = param_1;
        FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_128,uVar15,
                      uVar19 & 0xffffffffffffff00);
        uVar18 = (undefined4)(uVar15 >> 0x20);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_218 = (longlong *)local_118;
        uStack_210 = uStack_110;
        uStack_20c = uStack_10c;
        if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1a8);
        }
        FUN_140041b80(local_1a8,&local_218);
        local_108 = local_1a8;
        local_218 = local_128;
        uStack_210 = uStack_120;
        uStack_20c = uStack_11c;
        if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_198);
        }
        FUN_140041b80(local_198,&local_218);
        local_100 = local_198;
        uStack_23c = 0xf;
        local_248 = (longlong *)0x10000000000009d;
        local_218 = (longlong *)0x10000000000009d;
        uStack_210 = uStack_240;
        uStack_20c = 0xf;
        if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_188);
        }
        FUN_140041b80(local_188,&local_218);
        local_f8 = local_188;
        local_f0 = local_c8;
        local_218 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_210 = uRam00000001419df7a8;
        uStack_20c = uRam00000001419df7ac;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_218);
        local_e8 = local_168;
        ppuVar17 = (uint **)CONCAT44(uVar18,DAT_141a56b80);
        FUN_140e634e0(param_1,param_2,&local_238,5,ppuVar17,&local_108);
        local_1e8 = 0x58;
        while( true ) {
          uVar18 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          local_108 = local_c8;
          uVar6 = CONCAT44(uVar18,DAT_1419f58d8);
          uVar5 = FUN_140e634e0(param_1,param_2,&local_238,1,uVar6,&local_108);
          uVar18 = (undefined4)((ulonglong)uVar6 >> 0x20);
          cVar2 = FUN_140e491e0(uVar5);
          if (cVar2 != '\0') break;
          local_1e8 = 0x59;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          local_100 = local_c8;
          local_1d8 = _DAT_141dc6930;
          uStack_1d4 = uRam0000000141dc6934;
          uStack_1d0 = uRam0000000141dc6938;
          uStack_1cc = uRam0000000141dc693c;
          if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_188);
          }
          FUN_140041b80(local_188,&local_1d8);
          local_f8 = local_188;
          uVar5 = CONCAT44(uVar18,DAT_1419f5a78);
          puVar12 = (uint *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar5,&local_100);
          uVar18 = (undefined4)((ulonglong)uVar5 >> 0x20);
          if (puVar12 != local_a8) {
            local_1d8 = *puVar12;
            uStack_1d4 = puVar12[1];
            uStack_1d0 = puVar12[2];
            uStack_1cc = puVar12[3];
            if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_a8);
            }
            FUN_140041b80(local_a8,&local_1d8);
          }
          local_1e8 = 0x5a;
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_238 = 0;
          local_230 = 0;
          local_22c = 5;
          local_108 = local_c8;
          local_1d8 = _DAT_141dc6930;
          uStack_1d4 = uRam0000000141dc6934;
          uStack_1d0 = uRam0000000141dc6938;
          uStack_1cc = uRam0000000141dc693c;
          if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_198);
          }
          FUN_140041b80(local_198,&local_1d8);
          local_100 = local_198;
          ppuVar20 = &local_108;
          uVar15 = CONCAT44(uVar18,DAT_1419f5938);
          FUN_140e634e0(param_1,param_2,&local_238,2,uVar15,ppuVar20);
          local_1e8 = 0x5b;
          ppuVar17 = (uint **)(uVar15 & 0xffffffffffffff00);
          FUN_140e87440(local_a8,DAT_141a56cd0,0x80000000,&local_68,ppuVar17,
                        (ulonglong)ppuVar20 & 0xffffffffffffff00);
          uStack_23c = 10;
          local_248 = (longlong *)0x2;
          iVar3 = FUN_140e851f0(&local_68,&local_248,DAT_141955260,0);
          if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_248);
          }
          uVar18 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
          if (iVar3 == 0) {
            local_1e8 = 0x5b;
          }
          else {
            local_1e8 = 0x5c;
            if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_238);
            }
            local_238 = 0;
            local_230 = 0;
            local_22c = 5;
            puVar12 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04c28);
            if (puVar12 != local_1a8) {
              local_1d8 = *puVar12;
              uStack_1d4 = puVar12[1];
              uStack_1d0 = puVar12[2];
              uStack_1cc = puVar12[3];
              if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1a8);
              }
              FUN_140041b80(local_1a8,&local_1d8);
            }
            local_108 = local_1a8;
            local_100 = local_a8;
            ppuVar17 = (uint **)CONCAT44(uVar18,DAT_1419f5d88);
            uVar5 = FUN_140e634e0(param_1,param_2,&local_238,2,ppuVar17,&local_108);
            cVar2 = FUN_140e491e0(uVar5);
            uVar18 = (undefined4)((ulonglong)ppuVar17 >> 0x20);
            if (cVar2 == '\0') {
              local_1e8 = 0x5d;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              local_238 = 0;
              local_230 = 0;
              local_22c = 5;
              if (puVar12 != local_1a8) {
                local_1d8 = *puVar12;
                uStack_1d4 = puVar12[1];
                uStack_1d0 = puVar12[2];
                uStack_1cc = puVar12[3];
                if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_1a8);
                }
                FUN_140041b80(local_1a8,&local_1d8);
              }
              local_108 = local_1a8;
              local_100 = local_a8;
              ppuVar17 = &local_108;
              uVar15 = CONCAT44(uVar18,DAT_1419fe568);
              FUN_140e634e0(param_1,param_2,&local_238,2,uVar15,ppuVar17);
              local_1e8 = 0x5e;
              if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_238);
              }
              local_238 = 0;
              local_230 = 0;
              local_22c = 5;
              if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1b8);
              }
              local_1b8 = 0;
              local_1b0 = 0;
              local_1ac = 5;
              uStack_21c = 6;
              uVar19 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
              uVar15 = uVar15 & 0xffffffffffffff00;
              local_228 = param_1;
              FUN_140e87440(&local_228,DAT_1419fe0e8,0x80000000,&local_118,uVar15,uVar19);
              if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_228);
              }
              uStack_1fc = 6;
              uVar15 = uVar15 & 0xffffffffffffff00;
              local_208 = param_1;
              FUN_140e87440(&local_208,DAT_1419fe158,0x80000000,&local_128,uVar15,
                            uVar19 & 0xffffffffffffff00);
              uVar18 = (undefined4)(uVar15 >> 0x20);
              if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_208);
              }
              local_1d8 = DAT_141a575a0 & 0xffffff;
              uStack_1d4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
              if (uStack_1d4 == 0xf) {
                uStack_1d4 = 0x4000004;
              }
              else {
                uStack_1d4 = uStack_1d4 | 0x1000000;
              }
              uStack_1bc = 0xf;
              local_1c8 = (longlong *)(CONCAT44(uStack_1d4,DAT_141a575a0) & 0xffffffff00ffffff);
              uStack_1d0 = uStack_1c0;
              uStack_1cc = 0xf;
              if ((1 << ((byte)_local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_1a8);
              }
              FUN_140041b80(local_1a8,&local_1d8);
              local_108 = local_1a8;
              local_1d8 = (uint)local_118;
              uStack_1d4 = local_118._4_4_;
              uStack_1d0 = uStack_110;
              uStack_1cc = uStack_10c;
              if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_198);
              }
              FUN_140041b80(local_198,&local_1d8);
              local_100 = local_198;
              local_1d8 = (uint)local_128;
              uStack_1d4 = local_128._4_4_;
              uStack_1d0 = uStack_120;
              uStack_1cc = uStack_11c;
              if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_188);
              }
              FUN_140041b80(local_188,&local_1d8);
              local_f8 = local_188;
              uStack_20c = 0xf;
              local_218 = (longlong *)0x1000000000000ee;
              local_1d8 = 0xee;
              uStack_1d4 = 0x1000000;
              uStack_1d0 = uStack_210;
              uStack_1cc = 0xf;
              if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_178);
              }
              FUN_140041b80(local_178,&local_1d8);
              local_e8 = local_a8;
              local_1d8 = _DAT_1419e7b10;
              uStack_1d4 = uRam00000001419e7b14;
              uStack_1d0 = uRam00000001419e7b18;
              uStack_1cc = uRam00000001419e7b1c;
              local_f0 = local_178;
              if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_158);
              }
              FUN_140041b80(local_158,&local_1d8);
              local_e0 = local_158;
              puVar12 = (uint *)FUN_140e634e0(param_1,param_2,&local_1b8,6,
                                              CONCAT44(uVar18,DAT_1419fd6d8),&local_108);
              if (puVar12 != local_148) {
                local_1d8 = *puVar12;
                uStack_1d4 = puVar12[1];
                uStack_1d0 = puVar12[2];
                uStack_1cc = puVar12[3];
                if ((1 << ((byte)local_148[3] & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_148);
                }
                FUN_140041b80(local_148,&local_1d8);
              }
              local_d8 = local_148;
              local_1d8 = (uint)DAT_1419df7b0;
              uStack_1d4 = DAT_1419df7b0._4_4_;
              uStack_1d0 = DAT_1419df7b8;
              uStack_1cc = DAT_1419df7bc;
              if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_138);
              }
              FUN_140041b80(local_138,&local_1d8);
              local_d0 = local_138;
              ppuVar17 = &local_d8;
              gml_Script_draw_line_sprite(param_1,param_2,&local_238,2,ppuVar17);
            }
            else {
              local_1e8 = 0x5c;
            }
          }
        }
        local_1e8 = 0x60;
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_238 = 0;
        local_230 = 0;
        local_22c = 5;
        local_108 = local_c8;
        FUN_140e634e0(param_1,param_2,&local_238,1,CONCAT44(uVar18,DAT_1419f6038),&local_108);
      }
    }
    local_1e8 = 99;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
    FUN_140046040(uVar5);
  }
  else {
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdab8);
    uVar11 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdaf8);
    iVar3 = FUN_140e851f0(uVar7,uVar11,DAT_141955260,1);
    if ((iVar3 == -2) || (iVar3 < 0)) goto LAB_1406f5a06;
    local_1e8 = 0x42;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    puVar12 = (uint *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
    if (puVar12 != local_178) {
      local_218 = *(longlong **)puVar12;
      uStack_210 = puVar12[2];
      uStack_20c = puVar12[3];
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_178);
      }
      FUN_140041b80(local_178,&local_218);
    }
    local_218 = (longlong *)CONCAT44(uRam0000000141dc6934,_DAT_141dc6930);
    uStack_210 = uRam0000000141dc6938;
    uStack_20c = uRam0000000141dc693c;
    local_f0 = local_178;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_218);
    local_e8 = local_168;
    local_218 = (longlong *)CONCAT44(uRam00000001419e7b24,_DAT_1419e7b20);
    uStack_210 = uRam00000001419e7b28;
    uStack_20c = uRam00000001419e7b2c;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_218);
    local_e0 = local_158;
    FUN_140e609c0(param_1);
    puVar10 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_1b8,3,&local_f0);
    if (puVar10 != puVar8) {
      local_218 = (longlong *)*puVar10;
      uStack_210 = *(uint *)(puVar10 + 1);
      uStack_20c = *(uint *)((longlong)puVar10 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_218);
    }
    FUN_140e60910(1);
    local_1e8 = 0x43;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
    local_1e8 = 0x44;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a04c98);
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    FUN_140e609c0(param_1);
    if (puVar8 != puVar10) {
      local_218 = (longlong *)*puVar8;
      uStack_210 = *(uint *)(puVar8 + 1);
      uStack_20c = *(uint *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_218);
    }
    FUN_140e60910(1);
    local_1e8 = 0x45;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c88);
    FUN_140046040(uVar5);
    local_1e8 = 0x46;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04c88);
    uStack_23c = 0;
    local_248 = (longlong *)0x4024000000000000;
    uVar4 = FUN_140e851f0(uVar5,&local_248,DAT_141955260,1);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    if (uVar4 < 0x80000000) {
      local_1e8 = 0x47;
      uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a04cb8);
      cVar2 = FUN_140e491e0(uVar5);
      if (cVar2 == '\0') {
        local_1e8 = 0x4a;
        pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c58);
        uStack_23c = 0xd;
        local_248 = (longlong *)0x3ff0000000000000;
        if (&local_248 != pplVar9) {
          local_218 = (longlong *)0x3ff0000000000000;
          uStack_210 = uStack_240;
          uStack_20c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar9);
          }
          FUN_140041b80(pplVar9,&local_218);
        }
      }
      else {
        local_1e8 = 0x48;
        pplVar9 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04c48);
        uStack_23c = 0xd;
        local_248 = (longlong *)0x3ff0000000000000;
        if (&local_248 != pplVar9) {
          local_218 = (longlong *)0x3ff0000000000000;
          uStack_210 = uStack_240;
          uStack_20c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)pplVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(pplVar9);
          }
          FUN_140041b80(pplVar9,&local_218);
        }
      }
    }
  }
  local_1e8 = 0x66;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uStack_20c = 0xf;
  local_218 = (longlong *)0x100000000000149;
  local_1d8 = 0x149;
  uStack_1d4 = 0x1000000;
  uStack_1d0 = uStack_210;
  uStack_1cc = 0xf;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_1d8);
  local_108 = local_1a8;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_238,1,&local_108);
  local_1e8 = 0x67;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_238 = 0;
  local_230 = 0;
  local_22c = 5;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
  FUN_140e63610(param_1,param_2,&local_238,0,uVar5,0);
LAB_1406f66d7:
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_1a8,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1f8;
  return;
}

