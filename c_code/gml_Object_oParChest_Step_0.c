// gml_Object_oParChest_Step_0 @ 0x140ba64e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oParChest_Step_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar17;
  double dVar16;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined4 **ppuVar21;
  ulonglong uVar22;
  undefined4 **ppuVar23;
  ulonglong in_stack_fffffffffffffd30;
  ulonglong uVar24;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  double local_2b0;
  uint local_2a4;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined4 local_1c8 [4];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [48];
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong *local_158;
  undefined4 local_14c;
  longlong *local_148;
  undefined4 local_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined4 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 *local_c8;
  undefined4 *local_c0;
  undefined4 **local_b8;
  double *local_b0;
  undefined8 *local_a8;
  longlong **local_a0;
  undefined8 *local_98;
  undefined1 local_90 [16];
  longlong local_80;
  
  bVar3 = false;
  bVar2 = false;
  local_270 = "gml_Script_anon@2765@___struct___594@gml_Object_oParChest_Create_0";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_268 = 0x8a;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_1c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_254 = 0xffffff;
  local_260 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  puVar8 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  puVar9 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ff8b8);
  local_20c = 0xffffff;
  local_218 = 0;
  local_2a4 = 0xffffff;
  local_2b0 = 0.0;
  uVar14 = 0xffffff;
  bVar13 = 0xff;
  uStack_1fc = 0xffffff;
  local_208 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  puVar10 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_2b4 = 0;
  local_2c0 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_268 = 0x8c;
  uVar11 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c10);
  cVar4 = FUN_140e491e0(uVar11);
  if (cVar4 == '\0') goto LAB_140ba7253;
  local_268 = 0x8e;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b4 = 5;
  local_288 = (undefined4)DAT_1419df7b0;
  uStack_284 = DAT_1419df7b0._4_4_;
  uStack_280 = DAT_1419df7b8;
  uStack_27c = DAT_1419df7bc;
  if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_288);
  local_108 = local_1c8;
  local_288 = (undefined4)DAT_1419df7b0;
  uStack_284 = DAT_1419df7b0._4_4_;
  uStack_280 = DAT_1419df7b8;
  uStack_27c = DAT_1419df7bc;
  if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_288);
  local_100 = local_1b8;
  ppuVar21 = &local_108;
  uVar11 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_2c0,2,ppuVar21);
  cVar4 = FUN_140e491e0(uVar11);
  if (cVar4 == '\0') {
    local_268 = 0xa5;
    if (puVar10 != &local_260) {
      local_298 = *(undefined4 *)puVar10;
      uStack_294 = *(undefined4 *)((longlong)puVar10 + 4);
      uStack_290 = *(undefined4 *)(puVar10 + 1);
      uStack_28c = *(undefined4 *)((longlong)puVar10 + 0xc);
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      FUN_140041b80(&local_260,&local_298);
    }
    FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_260);
    goto LAB_140ba7253;
  }
  local_268 = 0x90;
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  local_254 = 0;
  local_260 = 0;
  FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_260);
  local_268 = 0x91;
  puVar10 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57c10);
  uStack_22c = 0xd;
  local_238 = 0;
  if (&local_238 != puVar10) {
    local_288 = 0;
    uStack_284 = 0;
    uStack_280 = uStack_230;
    uStack_27c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_288);
  }
  local_268 = 0x92;
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  local_2c0 = 0;
  local_2b8 = 0;
  local_2b4 = 5;
  uStack_23c = 0xf;
  local_248 = 0x1000000000000ee;
  in_stack_fffffffffffffd30 = in_stack_fffffffffffffd30 & 0xffffffffffffff00;
  uVar22 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
  FUN_140e87440(&local_248,DAT_1419f5868,0x80000000,&local_228,uVar22,in_stack_fffffffffffffd30);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140e87440(&local_228,DAT_141a55540,0x80000000,&local_1d8,uVar22 & 0xffffffffffffff00,
                in_stack_fffffffffffffd30 & 0xffffffffffffff00);
  local_288 = _DAT_141dda0d8;
  uStack_284 = uRam0000000141dda0dc;
  uStack_280 = uRam0000000141dda0e0;
  uStack_27c = DAT_141dda0e4;
  if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_288);
  local_108 = local_1c8;
  switch(local_21c) {
  default:
switchD_140ba68fa_caseD_1:
    uVar11 = 0;
    break;
  case 6:
    uVar11 = local_228;
    break;
  case 0xf:
    iVar7 = (int)((ulonglong)local_228 >> 0x20);
    if ((iVar7 != 0x1000000) && (iVar7 != 0x4000001)) goto switchD_140ba68fa_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar5 = FUN_140e4a8b0(&local_228);
    uVar11 = FUN_140e87250(uVar5);
  }
  ppuVar21 = &local_108;
  FUN_140e63610(uVar11,local_res10,&local_2c0,1,&local_1d8,ppuVar21);
  local_268 = 0x93;
  uStack_22c = 0xd;
  local_238 = 0x3ff0000000000000;
  if (&local_238 != puVar8) {
    local_288 = 0;
    uStack_284 = 0x3ff00000;
    uStack_280 = uStack_230;
    uStack_27c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    FUN_140041b80(puVar8,&local_288);
  }
  local_268 = 0x94;
  if (puVar9 != &local_218) {
    local_288 = *(undefined4 *)puVar9;
    uStack_284 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_280 = *(undefined4 *)(puVar9 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_288);
  }
  local_268 = 0x95;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_2a4 = 0;
  uVar15 = 0;
  uVar17 = 0;
  local_2b0 = 0.0;
  bVar1 = true;
  uVar5 = (undefined4)local_208;
  uVar18 = local_208._4_4_;
  uVar19 = uStack_200;
  uVar20 = uStack_1fc;
  do {
    dVar16 = (double)CONCAT44(uVar17,uVar15);
    bVar13 = (byte)uVar14;
    if (!bVar1) {
      local_268 = 0x95;
      uVar6 = local_2a4 & 0xffffff;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 == 7) {
            local_2b0 = (double)CONCAT44(local_2b0._4_4_,local_2b0._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_2b0 = (double)((longlong)local_2b0 + 1);
          }
          else {
            if (uVar6 == 0xd) goto LAB_140ba6a8a;
            FUN_140042910(&DAT_14172c3d8,&local_2b0,&local_2b0);
          }
          goto LAB_140ba6a98;
        }
        dVar16 = (double)FUN_140e4b060(&local_2b0);
LAB_140ba6a8a:
        local_2a4 = 0;
      }
      local_2b0 = dVar16 + 1.0;
    }
LAB_140ba6a98:
    bVar1 = false;
    iVar7 = FUN_140e851f0(&local_2b0,&local_218,DAT_141955260,1);
    if ((iVar7 == -2) || (-1 < iVar7)) break;
    local_268 = 0x97;
    if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c0);
    }
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b4 = 5;
    puVar12 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a918);
    if (puVar12 != local_1c8) {
      local_298 = *puVar12;
      uStack_294 = puVar12[1];
      uStack_290 = puVar12[2];
      uStack_28c = puVar12[3];
      if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_298);
    }
    local_108 = local_1c8;
    local_298 = (undefined4)DAT_1419df7b0;
    uStack_294 = DAT_1419df7b0._4_4_;
    uStack_290 = DAT_1419df7b8;
    uStack_28c = DAT_1419df7bc;
    if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_298);
    local_100 = local_1b8;
    ppuVar23 = &local_108;
    puVar8 = (undefined8 *)
             gml_Script_anon_5077_DefineTrinkets_TRINKETSINIT
                       (local_res8,local_res10,&local_2c0,2,ppuVar23);
    if (puVar8 != &local_208) {
      local_298 = *(undefined4 *)puVar8;
      uStack_294 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_290 = *(undefined4 *)(puVar8 + 1);
      uStack_28c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (bVar13 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_298);
      uVar5 = (undefined4)local_208;
      uVar18 = local_208._4_4_;
      uVar19 = uStack_200;
      uVar20 = uStack_1fc;
      uVar14 = uStack_1fc;
    }
    local_268 = 0x99;
    if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c0);
    }
    local_2c0 = 0;
    local_2b8 = 0;
    local_2b4 = 5;
    local_14c = 6;
    local_158 = local_res8;
    uVar24 = (ulonglong)ppuVar21 & 0xffffffffffffff00;
    uVar22 = (ulonglong)ppuVar23 & 0xffffffffffffff00;
    FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_168,uVar22,uVar24);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_13c = 6;
    local_148 = local_res8;
    uVar22 = uVar22 & 0xffffffffffffff00;
    FUN_140e87440(&local_148,DAT_1419fe158,0x80000000,&local_1e8,uVar22,uVar24 & 0xffffffffffffff00)
    ;
    uVar15 = (undefined4)(uVar22 >> 0x20);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_298 = (undefined4)local_168;
    uStack_294 = local_168._4_4_;
    uStack_290 = uStack_160;
    uStack_28c = uStack_15c;
    if ((1 << ((byte)local_1c8[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_298);
    local_108 = local_1c8;
    uStack_23c = local_1dc;
    uStack_240 = local_1e0;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
      local_248 = local_1e8;
    }
    else {
      FUN_1400419b0(&local_248,&local_1e8);
    }
    local_12c = 7;
    local_138[0] = 0x10;
    FUN_1400462a0(&local_248,local_138);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    local_298 = (undefined4)local_248;
    uStack_294 = local_248._4_4_;
    uStack_290 = uStack_240;
    uStack_28c = uStack_23c;
    if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_298);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_100 = local_1b8;
    local_298 = _DAT_141dda0f8;
    uStack_294 = uRam0000000141dda0fc;
    uStack_290 = uRam0000000141dda100;
    uStack_28c = DAT_141dda104;
    if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_298);
    local_f8 = local_1a8;
    uStack_cc = 0xf;
    local_d8 = 0x100000000000061;
    local_298 = 0x61;
    uStack_294 = 0x1000000;
    uStack_290 = uStack_d0;
    uStack_28c = 0xf;
    if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_298);
    local_f0 = local_198;
    ppuVar21 = &local_108;
    uVar22 = CONCAT44(uVar15,DAT_141a0a7c8);
    puVar8 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2c0,4,uVar22,ppuVar21);
    if (puVar8 != &local_1f8) {
      local_298 = *(undefined4 *)puVar8;
      uStack_294 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_290 = *(undefined4 *)(puVar8 + 1);
      uStack_28c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      FUN_140041b80(&local_1f8,&local_298);
    }
    local_268 = 0x9a;
    iVar7 = FUN_140e63cb0(local_90,&local_res8,&local_res10,&local_1f8);
    if (0 < iVar7) {
      do {
        local_268 = 0x9c;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a57b30);
        FUN_140e609c0(local_res8);
        if (&local_208 != puVar8) {
          local_298 = uVar5;
          uStack_294 = uVar18;
          uStack_290 = uVar19;
          uStack_28c = uVar20;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          FUN_140041b80(puVar8,&local_298);
        }
        FUN_140e60910(1);
        local_268 = 0x9d;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        local_11c = 0;
        local_128 = 0x3ff0000000000000;
        iVar7 = FUN_140e851f0(&local_218,&local_128,DAT_141955260,1);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        if (iVar7 < 1) {
          uStack_22c = 0;
          local_238 = 0;
          puVar9 = &local_238;
          bVar2 = true;
        }
        else {
          local_c8 = &local_118;
          local_c0 = local_1c8;
          local_b8 = &local_108;
          local_b0 = &local_2b0;
          local_a8 = &local_218;
          local_a0 = &local_res8;
          local_98 = &local_res10;
          puVar9 = (undefined8 *)FUN_140ba7400(&local_c8,&local_288);
          bVar3 = true;
        }
        FUN_140e609c0(local_res8);
        if (puVar9 != puVar8) {
          local_298 = *(undefined4 *)puVar9;
          uStack_294 = *(undefined4 *)((longlong)puVar9 + 4);
          uStack_290 = *(undefined4 *)(puVar9 + 1);
          uStack_28c = *(undefined4 *)((longlong)puVar9 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          FUN_140041b80(puVar8,&local_298);
        }
        if ((bVar2) && (bVar2 = false, (1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_238);
        }
        if ((bVar3) && (bVar3 = false, (1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_288);
        }
        FUN_140e60910(1);
        local_268 = 0x9e;
        puVar8 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar8);
        }
        *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        *puVar8 = 0xc010000000000000;
        cVar4 = FUN_140e643f0(local_90,&local_res8,&local_res10);
      } while (cVar4 != '\0');
    }
    FUN_140e63970(local_90,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    ppuVar21 = (undefined4 **)((ulonglong)ppuVar21 & 0xffffffffffffff00);
    FUN_140e87440(&local_228,DAT_141a55540,0x80000000,&local_1d8,uVar22 & 0xffffffffffffff00,
                  ppuVar21);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    if (local_80 != 0) {
      FUN_140e4cd60();
    }
    uVar15 = SUB84(local_2b0,0);
    uVar17 = (undefined4)((ulonglong)local_2b0 >> 0x20);
  } while( true );
  local_268 = 0xa2;
  param_3 = local_res18;
LAB_140ba7253:
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << (bVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  _eh_vector_destructor_iterator_(local_1c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return param_3;
}

