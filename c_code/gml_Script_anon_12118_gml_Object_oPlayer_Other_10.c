// gml_Script_anon_12118_gml_Object_oPlayer_Other_10 @ 0x140c71160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12118_gml_Object_oPlayer_Other_10
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar10;
  ulonglong uVar11;
  ulonglong in_stack_fffffffffffffd90;
  undefined1 **ppuVar12;
  undefined8 local_268;
  undefined4 local_260;
  uint local_25c;
  undefined8 local_258;
  undefined4 local_250;
  uint local_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  uint local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  uint local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b4;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined4 local_13c;
  undefined4 local_138 [3];
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8 [2];
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  
  local_220 = "gml_Script_anon@11472@gml_Object_oPlayer_Other_10";
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_218 = 0x1f9;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_140041df0(local_c8,param_4,1,param_5);
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_108,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_1d4 = 0xffffff;
  local_1e0 = 0;
  local_1b4 = 0xffffff;
  local_1c0 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_1c4 = 0xffffff;
  local_1d0 = 0;
  local_1e4 = 0;
  local_1f0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_218 = 0x1f9;
  uVar7 = (ulonglong)local_c8[0];
  if ((int)local_c8[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_c0;
  }
  iVar3 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_218 = 0x1f9;
    local_25c = 0xf;
    local_268 = 0x1000000000000ee;
    in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
    pcVar10 = (code *)((ulonglong)pcVar10 & 0xffffffffffffff00);
    FUN_140e87440(&local_268,DAT_1419ffa68,0x80000000,&local_178,pcVar10,in_stack_fffffffffffffd90);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    if ((int)local_c8[0] < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*local_c0;
      if (&local_178 == puVar6) goto LAB_140c7137e;
    }
    local_118 = local_178;
    uStack_110 = uStack_170;
    uStack_10c = uStack_16c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    FUN_140041b80(puVar6,&local_118);
  }
LAB_140c7137e:
  local_218 = 0x1fb;
  local_25c = 0xf;
  local_268 = 0x1000000000000ee;
  in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
  uVar11 = (ulonglong)pcVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_268,DAT_1419ff028,0x80000000,&local_158,uVar11,in_stack_fffffffffffffd90);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((int)local_c8[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_c0;
  }
  FUN_140042560(puVar6,&local_158);
  local_218 = 0x1fc;
  local_25c = 0xf;
  local_268 = 0x100000000000106;
  iVar3 = FUN_140e63cb0(local_a0,&local_res8,&local_res10,&local_268);
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if (0 < iVar3) {
    do {
      local_218 = 0x1fe;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
      local_13c = 0;
      local_148 = &DAT_bff0000000000000;
      iVar3 = FUN_140e851f0(uVar5,&local_148,DAT_141955260,0);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if (iVar3 == 0) {
        local_218 = 0x1ff;
        goto LAB_140c71c8e;
      }
      local_218 = 0x201;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff8e8);
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
      in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a0ab38,0x80000000,&local_248,uVar11,in_stack_fffffffffffffd90);
      in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a0a9d8,0x80000000,&local_168,uVar11,in_stack_fffffffffffffd90);
      local_204 = *(undefined4 *)((longlong)puVar6 + 0xc);
      local_208 = *(undefined4 *)(puVar6 + 1);
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) == 0) {
        local_210 = *puVar6;
      }
      else {
        FUN_1400419b0(&local_210,puVar6);
      }
      FUN_1400460e0(&local_210,&local_168);
      local_18c = local_204;
      local_190 = local_208;
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) == 0) {
        local_198 = local_210;
      }
      else {
        FUN_1400419b0(&local_198,&local_210);
      }
      local_12c = 7;
      local_138[0] = 1;
      FUN_1400460e0(&local_198,local_138);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      uStack_19c = local_23c;
      uStack_1a0 = local_240;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
        local_1a8 = local_248;
      }
      else {
        FUN_1400419b0(&local_1a8,&local_248);
      }
      FUN_140042560(&local_1a8,&local_198);
      local_238 = (undefined4)local_1a8;
      uStack_234 = local_1a8._4_4_;
      uStack_230 = uStack_1a0;
      uStack_22c = uStack_19c;
      if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e0);
      }
      FUN_140041b80(&local_1e0,&local_238);
      if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      local_218 = 0x202;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
      in_stack_fffffffffffffd90 = in_stack_fffffffffffffd90 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a0ab38,0x80000000,&local_248,uVar11,in_stack_fffffffffffffd90);
      uStack_17c = local_23c;
      uStack_180 = local_240;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) == 0) {
        local_188 = local_248;
      }
      else {
        FUN_1400419b0(&local_188,&local_248);
      }
      local_11c = 0;
      local_128 = 0x3fee666666666666;
      FUN_140042560(&local_188,&local_128);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_238 = (undefined4)local_188;
      uStack_234 = local_188._4_4_;
      uStack_230 = uStack_180;
      uStack_22c = uStack_17c;
      if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c0);
      }
      FUN_140041b80(&local_1c0,&local_238);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_218 = 0x204;
      puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f7f98);
      uStack_cc = 0xd;
      local_d8 = 0;
      if (&local_d8 != puVar6) {
        local_238 = 0;
        uStack_234 = 0;
        uStack_230 = uStack_d0;
        uStack_22c = 0xd;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar6);
        }
        FUN_140041b80(puVar6,&local_238);
      }
      local_218 = 0x206;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
      ppuVar12 = (undefined1 **)(in_stack_fffffffffffffd90 & 0xffffffffffffff00);
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a0aaf8,0x80000000,&local_258,uVar11,ppuVar12);
      if ((int)local_c8[0] < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*local_c0;
      }
      local_25c = local_24c;
      local_260 = local_250;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
        local_268 = local_258;
      }
      else {
        FUN_1400419b0(&local_268,&local_258);
      }
      FUN_1400460e0(&local_268,puVar6);
      uVar4 = FUN_140e851f0(&local_268,&local_1c0,DAT_141955260,1);
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      if (uVar4 < 0x80000000) {
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
        ppuVar12 = (undefined1 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
        uVar11 = uVar11 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a0aaf8,0x80000000,&local_258,uVar11,ppuVar12);
        iVar3 = FUN_140e851f0(&local_258,&local_1c0,DAT_141955260,1);
        if ((iVar3 != -2) && (iVar3 < 0)) {
          local_218 = 0x207;
          if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1f0);
          }
          uVar8 = (undefined4)(uVar11 >> 0x20);
          local_1f0 = 0;
          local_1e8 = 0;
          local_1e4 = 5;
          uStack_10c = 0xf;
          local_118 = 0x1000002000000bc;
          local_238 = 0xbc;
          uStack_234 = 0x1000002;
          uStack_230 = uStack_110;
          uStack_22c = 0xf;
          if ((1 << (local_108[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_108);
          }
          FUN_140041b80(local_108,&local_238);
          local_b8 = local_108;
          local_238 = _DAT_1419ed000;
          uStack_234 = uRam00000001419ed004;
          uStack_230 = uRam00000001419ed008;
          uStack_22c = uRam00000001419ed00c;
          if ((1 << (local_f8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_238);
          local_b0 = local_f8;
          local_238 = _DAT_1419df7a0;
          uStack_234 = uRam00000001419df7a4;
          uStack_230 = uRam00000001419df7a8;
          uStack_22c = uRam00000001419df7ac;
          if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_238);
          local_a8 = local_e8;
          ppuVar12 = &local_b8;
          uVar11 = CONCAT44(uVar8,DAT_141a0a2e8);
          FUN_140e634e0(local_res8,local_res10,&local_1f0,3,uVar11,ppuVar12);
        }
      }
      local_218 = 0x209;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a958);
      in_stack_fffffffffffffd90 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(uVar5,DAT_141a0aaf8,0x80000000,&local_258,uVar11,in_stack_fffffffffffffd90);
      if ((int)local_c8[0] < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*local_c0;
      }
      local_1f4 = local_24c;
      local_1f8 = local_250;
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) == 0) {
        local_200 = local_258;
      }
      else {
        FUN_1400419b0(&local_200,&local_258);
      }
      FUN_1400460e0(&local_200,puVar6);
      uVar9 = local_1e0;
      if ((local_1d4 & 0xffffff) != 0) {
        uVar9 = FUN_140e4b060(&local_1e0);
      }
      if ((local_1f4 & 0xffffff) == 0) {
        uVar8 = (undefined4)local_200;
      }
      else {
        uVar8 = FUN_140e4b060(&local_200);
      }
      uVar9 = FUN_140e78ec0(uVar8,0,uVar9);
      if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d0);
      }
      local_1c4 = 0;
      local_1d0 = uVar9;
      if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_200);
      }
      FUN_140e87930(uVar5,DAT_141a0aaf8,0x80000000);
      cVar2 = FUN_140e643f0(local_a0,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_a0,&local_res8,&local_res10);
LAB_140c71c8e:
  if (local_90 != 0) {
    FUN_140e4cd60();
    local_90 = 0;
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,3,FUN_140041b30);
  if (0 < (int)local_c8[0]) {
    puVar6 = local_c0;
    do {
      puVar1 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      *(undefined4 *)((longlong)puVar1 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_c0);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return param_3;
}

