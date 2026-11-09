// gml_Script____struct___414_gml_Object_oCageArm_Create_0 @ 0x14087af10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___414_gml_Object_oCageArm_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 uVar11;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffdb0;
  undefined1 **ppuVar12;
  ulonglong uVar13;
  longlong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  char *local_210;
  undefined4 local_208;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_210 = "gml_Script_anon@1758@___struct___414@gml_Object_oCageArm_Create_0";
  local_218 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_218;
  local_208 = 0x73;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1d8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_10c = 0xffffff;
  local_118 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  uStack_8c = 0xffffff;
  local_98 = (longlong *)0x0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_18c = 0xffffff;
  local_198 = 0;
  local_21c = 0;
  local_228 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_208 = 0x75;
  uStack_22c = 0xf;
  local_238 = (longlong *)0x100000100000089;
  local_248 = (longlong *)0x100000100000089;
  uStack_240 = uStack_230;
  uStack_23c = 0xf;
  if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_248);
  local_108 = local_1d8;
  local_238 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_230 = DAT_1419df7b8;
  uStack_22c = DAT_1419df7bc;
  if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_238);
  local_100 = local_1c8;
  ppuVar9 = &local_108;
  uVar5 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_228,2,ppuVar9);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 != '\0') {
    local_208 = 0x77;
    uStack_22c = 0xf;
    local_238 = (longlong *)0x100000100000087;
    local_248 = (longlong *)0x100000100000087;
    uStack_240 = uStack_230;
    uStack_23c = 0xf;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_248);
    FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_118);
    local_208 = 0x78;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_15c = 0;
    local_168 = 0;
    FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_168);
    local_208 = 0x7a;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    uStack_23c = 6;
    local_248 = local_res8;
    in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
    uVar7 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_78,uVar7,in_stack_fffffffffffffdb0);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    uStack_23c = 6;
    local_248 = local_res8;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_1419fe158,0x80000000,&local_88,uVar7,
                  in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_238 = (longlong *)local_78;
    uStack_230 = uStack_70;
    uStack_22c = uStack_6c;
    if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_238);
    local_108 = local_1d8;
    local_238 = (longlong *)local_88;
    uStack_230 = uStack_80;
    uStack_22c = uStack_7c;
    if ((1 << ((byte)_local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_238);
    local_100 = local_1c8;
    local_238 = (longlong *)CONCAT44(uRam0000000141dd72fc,_DAT_141dd72f8);
    uStack_230 = uRam0000000141dd7300;
    uStack_22c = DAT_141dd7304;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_238);
    local_f8 = local_1b8;
    uStack_22c = 0xf;
    local_238 = (longlong *)0x100000000000005;
    local_248 = (longlong *)0x100000000000005;
    uStack_240 = uStack_230;
    uStack_23c = 0xf;
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1a8);
    }
    FUN_140041b80(local_1a8,&local_248);
    local_f0 = local_1a8;
    ppuVar9 = &local_108;
    uVar7 = CONCAT44(uVar11,DAT_141a0a7c8);
    puVar6 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_228,4,uVar7,ppuVar9);
    if (puVar6 != &local_178) {
      local_238 = (longlong *)*puVar6;
      uStack_230 = *(undefined4 *)(puVar6 + 1);
      uStack_22c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_238);
    }
    FUN_140e87930(uVar5,DAT_1419f6278,0x80000000,&local_178);
    local_208 = 0x7b;
    uStack_22c = 0xf;
    local_238 = (longlong *)0x100000100000088;
    local_248 = (longlong *)0x100000100000088;
    uStack_240 = uStack_230;
    uStack_23c = 0xf;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_248);
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    in_stack_fffffffffffffdb0 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419f6278,0x80000000,&local_1e8,uVar7,in_stack_fffffffffffffdb0);
    FUN_140e86c30(&local_1e8,DAT_141a0a728,0x80000000,&local_128);
    local_208 = 0x7c;
    puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a748);
    if (puVar6 != &local_188) {
      local_238 = (longlong *)*puVar6;
      uStack_230 = *(undefined4 *)(puVar6 + 1);
      uStack_22c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_238);
    }
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419f6278,0x80000000,&local_1e8,uVar7,in_stack_fffffffffffffdb0);
    FUN_140e86c30(&local_1e8,DAT_141a0f7f8,0x80000000,&local_188);
    local_208 = 0x7d;
    uStack_23c = 6;
    local_248 = local_res8;
    in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
    uVar7 = uVar7 & 0xffffffffffffff00;
    FUN_140e87440(&local_248,DAT_141a0a828,0x80000000,&local_98,uVar7,in_stack_fffffffffffffdb0);
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_238 = local_98;
    uStack_230 = uStack_90;
    uStack_22c = uStack_8c;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_238);
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
    ppuVar9 = (undefined1 **)(uVar7 & 0xffffffffffffff00);
    FUN_140e87440(uVar5,DAT_1419f6278,0x80000000,&local_1e8,ppuVar9,in_stack_fffffffffffffdb0);
    FUN_140e87930(&local_1e8,DAT_141a1f0d0,0x80000000,&local_138);
  }
  local_208 = 0x82;
  uStack_23c = 6;
  local_248 = local_res8;
  in_stack_fffffffffffffdb0 = in_stack_fffffffffffffdb0 & 0xffffffffffffff00;
  ppuVar9 = (undefined1 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
  FUN_140e87440(&local_248,DAT_141a0a728,0x80000000,&local_a8,ppuVar9,in_stack_fffffffffffffdb0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  uStack_23c = 0xf;
  local_248 = (longlong *)0x100000100000087;
  iVar2 = FUN_140e851f0(&local_a8,&local_248,DAT_141955260,0);
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if (iVar2 == 0) {
    local_208 = 0x84;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
    ppuVar12 = (undefined1 **)(in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
    uVar7 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419f6278,0x80000000,&local_1e8,uVar7,ppuVar12);
    iVar2 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_1e8);
    if (0 < iVar2) {
      do {
        local_208 = 0x86;
        uStack_23c = 6;
        local_248 = local_res10;
        uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(&local_248,DAT_1419fe0e8,0x80000000,&local_b8,uVar7,uVar13);
        if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_248);
        }
        local_1f8 = (undefined4)local_b8;
        uStack_1f4 = local_b8._4_4_;
        uStack_1f0 = uStack_b0;
        uStack_1ec = uStack_ac;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1f8);
        FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_148);
        local_208 = 0x87;
        uStack_22c = 6;
        local_238 = local_res10;
        uVar13 = uVar13 & 0xffffffffffffff00;
        uVar10 = uVar7 & 0xffffffffffffff00;
        FUN_140e87440(&local_238,DAT_1419fe158,0x80000000,&local_c8,uVar10,uVar13);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_1f8 = (undefined4)local_c8;
        uStack_1f4 = local_c8._4_4_;
        uStack_1f0 = uStack_c0;
        uStack_1ec = uStack_bc;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_1f8);
        FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_158);
        local_208 = 0x89;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
        FUN_140e87440(uVar8,DAT_141a0a7d8,0x80000000,&local_d8,uVar10 & 0xffffffffffffff00,
                      uVar13 & 0xffffffffffffff00);
        local_1f8 = (undefined4)local_d8;
        uStack_1f4 = local_d8._4_4_;
        uStack_1f0 = uStack_d0;
        uStack_1ec = uStack_cc;
        if ((1 << ((byte)_local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1d8);
        }
        FUN_140041b80(local_1d8,&local_1f8);
        local_108 = local_1d8;
        ppuVar12 = &local_108;
        FUN_140e63610(local_res8,local_res10,&local_228,1,uVar7,ppuVar12);
        cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_68,&local_res8,&local_res10);
    DAT_141a67c38 = 1;
    in_stack_fffffffffffffdb0 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419f6278,0x80000000,&local_1e8,uVar7 & 0xffffffffffffff00,
                  in_stack_fffffffffffffdb0);
    DAT_141a67c38 = 0;
    DAT_141a72aac = 0;
    local_208 = 0x8d;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_1f8);
    local_108 = local_1d8;
    local_1f8 = (undefined4)DAT_1419df7b0;
    uStack_1f4 = DAT_1419df7b0._4_4_;
    uStack_1f0 = DAT_1419df7b8;
    uStack_1ec = DAT_1419df7bc;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_1f8);
    local_100 = local_1c8;
    ppuVar9 = &local_108;
    uVar5 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_228,2,ppuVar9);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 != '\0') {
      local_208 = 0x8e;
      uVar5 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a12108);
      FUN_140046040(uVar5);
    }
    if (local_58 != 0) {
      FUN_140e4cd60();
    }
  }
  local_208 = 0x93;
  uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a12108);
  uStack_22c = 0;
  local_238 = (longlong *)0x4010000000000000;
  uVar3 = FUN_140e851f0(uVar5,&local_238,DAT_141955260,1);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if (uVar3 < 0x80000000) {
    local_208 = 0x95;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    local_228 = 0;
    local_220 = 0;
    local_21c = 5;
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
    FUN_140e87440(uVar5,DAT_141a55540,0x80000000,&local_e8,(ulonglong)ppuVar9 & 0xffffffffffffff00,
                  in_stack_fffffffffffffdb0 & 0xffffffffffffff00);
    local_1f8 = _DAT_141dd72e8;
    uStack_1f4 = uRam0000000141dd72ec;
    uStack_1f0 = uRam0000000141dd72f0;
    uStack_1ec = DAT_141dd72f4;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_1f8);
    local_108 = local_1d8;
    uVar5 = FUN_140069500(uVar5);
    FUN_140e63610(uVar5,local_res10,&local_228,1,&local_e8,&local_108);
  }
  local_208 = 0x99;
  if (puVar4 != &local_198) {
    local_1f8 = *(undefined4 *)puVar4;
    uStack_1f4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_1f0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1f8);
  }
  FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_198);
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(local_1d8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_218;
  return param_3;
}

