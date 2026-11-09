// gml_Script_anon_1673_anon_198_gml_Object_oBossKillText_Create_0 @ 0x1407a0000

longlong *
gml_Script_anon_1673_anon_198_gml_Object_oBossKillText_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 *local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  double local_2a8;
  uint local_29c;
  undefined8 local_298;
  char *local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 *local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined8 *local_260;
  undefined4 local_258;
  undefined4 local_254;
  undefined8 *local_248;
  ulonglong uStack_240;
  longlong local_238;
  undefined4 local_22c;
  undefined8 *local_228;
  char *pcStack_220;
  undefined4 local_218;
  undefined8 *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 *local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
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
  double local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  uint local_f8 [2];
  undefined8 *local_f0;
  undefined1 local_e8 [176];
  
  local_290 = "gml_Script_anon@549@anon@198@gml_Object_oBossKillText_Create_0";
  local_298 = DAT_141dc7a50;
  DAT_141dc7a50 = (undefined8 **)&local_298;
  local_288 = 0x1d;
  FUN_140041df0(local_f8,param_4,3,param_5);
  _eh_vector_constructor_iterator_(local_e8,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_13c = 0xffffff;
  local_148 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_29c = 0xffffff;
  local_2a8 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_254 = 0xffffff;
  local_260 = (undefined8 *)0x0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_264 = 0xffffff;
  local_270 = (undefined8 *)0x0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_274 = 0;
  local_280 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_288 = 0x1d;
  uVar11 = (ulonglong)local_f8[0];
  if ((int)local_f8[0] < 3) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_f0[2];
  }
  iVar5 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_288 = 0x1d;
    if ((int)local_f8[0] < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_f0[2];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = &DAT_bff0000000000000;
  }
  local_288 = 0x1f;
  puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bb8);
  uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = (undefined8 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_2c8,puVar7);
  }
  local_2ac = 0;
  local_2b8 = 0x3fe0000000000000;
  FUN_140042560(&local_2c8,&local_2b8);
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((int)local_f8[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_f0;
  }
  uStack_2cc = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_2d0 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
    local_2d8 = (undefined8 *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_2d8);
  }
  FUN_1400462a0(&local_2d8,&local_2c8);
  uStack_240 = CONCAT44(uStack_2cc,uStack_2d0);
  local_248 = local_2d8;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  FUN_140041b80(&local_148,&local_248);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_288 = 0x20;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08c18);
  uStack_2cc = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_2d0 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
    local_2d8 = (undefined8 *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_2d8,puVar8);
  }
  local_2ac = 0;
  local_2b8 = 0x3fe0000000000000;
  FUN_140042560(&local_2d8,&local_2b8);
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((int)local_f8[0] < 2) {
    puVar10 = &DAT_1419df7b0;
  }
  else {
    puVar10 = (undefined8 *)local_f0[1];
  }
  uStack_2bc = *(undefined4 *)((longlong)puVar10 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar10 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = (undefined8 *)*puVar10;
  }
  else {
    FUN_1400419b0(&local_2c8);
  }
  FUN_1400462a0(&local_2c8,&local_2d8);
  uStack_240 = CONCAT44(uStack_2bc,uStack_2c0);
  local_248 = local_2c8;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_248);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_288 = 0x21;
  uStack_2cc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_2d0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
    local_2d8 = (undefined8 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_2d8,puVar7);
  }
  local_2ac = 0;
  local_2b8 = 0x3fe0000000000000;
  FUN_140042560(&local_2d8,&local_2b8);
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((int)local_f8[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_f0;
  }
  uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = (undefined8 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_2c8);
  }
  FUN_1400460e0(&local_2c8,&local_2d8);
  uStack_240 = CONCAT44(uStack_2bc,uStack_2c0);
  local_248 = local_2c8;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_248);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_288 = 0x22;
  uStack_2cc = *(undefined4 *)((longlong)puVar8 + 0xc);
  uStack_2d0 = *(undefined4 *)(puVar8 + 1);
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
    local_2d8 = (undefined8 *)*puVar8;
  }
  else {
    FUN_1400419b0(&local_2d8,puVar8);
  }
  local_2ac = 0;
  local_2b8 = 0x3fe0000000000000;
  FUN_140042560(&local_2d8,&local_2b8);
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((int)local_f8[0] < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_f0[1];
  }
  uStack_2bc = *(undefined4 *)((longlong)puVar7 + 0xc);
  uStack_2c0 = *(undefined4 *)(puVar7 + 1);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) == 0) {
    local_2c8 = (undefined8 *)*puVar7;
  }
  else {
    FUN_1400419b0(&local_2c8);
  }
  FUN_1400460e0(&local_2c8,&local_2d8);
  uStack_240 = CONCAT44(uStack_2bc,uStack_2c0);
  local_248 = local_2c8;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_248);
  if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_288 = 0x24;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_29c = 0;
  local_2a8 = 0.0;
  bVar3 = true;
  uVar12 = 0x3ff00000;
  do {
    iVar5 = 0;
    if (!bVar3) {
      local_288 = 0x24;
      (**(code **)(*param_1 + 8))(param_1,DAT_141a08bb8);
      (**(code **)(*param_1 + 8))(param_1,DAT_141a08c18);
      uVar6 = local_29c & 0xffffff;
      if (uVar6 != 0) {
        if (uVar6 != 1) {
          if (uVar6 == 7) {
            local_2a8 = (double)CONCAT44(local_2a8._4_4_,local_2a8._0_4_ + 1);
          }
          else if (uVar6 == 10) {
            local_2a8 = (double)((longlong)local_2a8 + 1);
          }
          else {
            if (uVar6 == 0xd) {
              local_29c = 0;
              goto LAB_1407a082c;
            }
            FUN_140042910(&DAT_14172c3d8,&local_2a8,&local_2a8);
          }
          goto LAB_1407a0836;
        }
        local_2a8 = (double)FUN_140e4b060(&local_2a8);
        local_29c = 0;
      }
LAB_1407a082c:
      local_2a8 = local_2a8 + 1.0;
    }
LAB_1407a0836:
    bVar3 = false;
    plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bd8);
    if ((*(int *)((longlong)plVar9 + 0xc) == 2) && (*plVar9 != 0)) {
      iVar5 = *(int *)(*plVar9 + 0x24);
    }
    local_12c = 0;
    local_138 = (double)iVar5;
    iVar5 = FUN_140e851f0(&local_2a8,&local_138,DAT_141955260,1);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar5 == -2 || -1 < iVar5) {
      local_288 = 0x33;
      uVar12 = 0;
      goto LAB_1407a1144;
    }
    local_288 = 0x26;
    if ((int)local_f8[0] < 3) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)local_f0[2];
    }
    iVar5 = FUN_140e851f0(&local_2a8,puVar7,DAT_141955260,0);
    if (iVar5 == 0) {
      local_288 = 0x26;
    }
    else {
      local_288 = 0x28;
      plVar9 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bd8);
      iVar5 = FUN_140e4a740(&local_2a8);
      if (((*(uint *)((longlong)plVar9 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar9, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar9 = (longlong *)0x0;
        }
        else {
          plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      if (plVar9 != &local_238) {
        local_228 = (undefined8 *)*plVar9;
        pcStack_220 = (char *)plVar9[1];
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        FUN_140041b80(&local_238,&local_228);
      }
      local_288 = 0x2a;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bb8);
      FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_260,param_1,param_2);
      uStack_2cc = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_2d0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) == 0) {
        local_2d8 = (undefined8 *)*puVar7;
      }
      else {
        FUN_1400419b0(&local_2d8,puVar7);
      }
      local_11c = 0;
      local_128 = 0x3fe0000000000000;
      FUN_140042560(&local_2d8,&local_128);
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      uStack_2bc = local_254;
      uStack_2c0 = local_258;
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) == 0) {
        local_2c8 = local_260;
      }
      else {
        FUN_1400419b0(&local_2c8,&local_260);
      }
      FUN_1400462a0(&local_2c8,&local_2d8);
      pcStack_220 = (char *)CONCAT44(uStack_2bc,uStack_2c0);
      local_228 = local_2c8;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_228);
      if ((1 << ((byte)uStack_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d8);
      }
      local_288 = 0x2b;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08c18);
      FUN_140e87170(&local_238,DAT_1419fe158,0x80000000,&local_270,param_1,param_2);
      local_1ec = *(undefined4 *)((longlong)puVar7 + 0xc);
      local_1f0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) == 0) {
        local_1f8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_1f8,puVar7);
      }
      local_10c = 0;
      local_118 = 0x3fe0000000000000;
      FUN_140042560(&local_1f8,&local_118);
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      uStack_1fc = local_264;
      uStack_200 = local_268;
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) == 0) {
        local_208 = local_270;
      }
      else {
        FUN_1400419b0(&local_208,&local_270);
      }
      FUN_1400462a0(&local_208,&local_1f8);
      pcStack_220 = (char *)CONCAT44(uStack_1fc,uStack_200);
      local_228 = local_208;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_228);
      if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_288 = 0x2c;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08bb8);
      FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_260,param_1,param_2);
      local_1cc = *(undefined4 *)((longlong)puVar7 + 0xc);
      local_1d0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
        local_1d8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_1d8,puVar7);
      }
      local_fc = 0;
      local_108 = 0x3fe0000000000000;
      FUN_140042560(&local_1d8,&local_108);
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      uStack_1dc = local_254;
      uStack_1e0 = local_258;
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) == 0) {
        local_1e8 = local_260;
      }
      else {
        FUN_1400419b0(&local_1e8,&local_260);
      }
      FUN_1400460e0(&local_1e8,&local_1d8);
      pcStack_220 = (char *)CONCAT44(uStack_1dc,uStack_1e0);
      local_228 = local_1e8;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_228);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_288 = 0x2d;
      puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a08c18);
      FUN_140e87170(&local_238,DAT_1419fe158,0x80000000,&local_270,param_1,param_2);
      local_2ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      local_2b0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) == 0) {
        local_2b8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_2b8,puVar7);
      }
      uStack_240 = uStack_240 & 0xffffffff;
      local_248 = (undefined8 *)0x3fe0000000000000;
      FUN_140042560(&local_2b8,&local_248);
      if ((1 << ((byte)(uStack_240 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      uStack_1bc = local_264;
      uStack_1c0 = local_268;
      if ((1 << ((byte)local_264 & 0x1f) & 0x46U) == 0) {
        local_1c8 = local_270;
      }
      else {
        FUN_1400419b0(&local_1c8,&local_270);
      }
      FUN_1400460e0(&local_1c8,&local_2b8);
      pcStack_220 = (char *)CONCAT44(uStack_1bc,uStack_1c0);
      local_228 = local_1c8;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_228);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_288 = 0x2f;
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      local_278 = 0;
      pcStack_220 = "gml_Script_rect_overlap";
      local_228 = DAT_141dc7a50;
      DAT_141dc7a50 = &local_228;
      local_274 = 5;
      local_280 = 0;
      local_218 = 3;
      bVar2 = false;
      iVar5 = FUN_140e851f0(&local_148,&local_1a8,DAT_141955260,1);
      if ((((iVar5 != -2 && iVar5 < 0) &&
           (iVar5 = FUN_140e851f0(&local_168,&local_188,DAT_141955260,1), 0 < iVar5)) &&
          (iVar5 = FUN_140e851f0(&local_158,&local_1b8,DAT_141955260,1), iVar5 != -2 && iVar5 < 0))
         && (iVar5 = FUN_140e851f0(&local_178,&local_198,DAT_141955260,1), iVar5 != -2)) {
        bVar2 = 0 < iVar5;
      }
      if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_280);
      }
      local_274 = 0xd;
      if (bVar2) {
        local_280 = 0x3ff0000000000000;
      }
      else {
        local_280 = 0;
      }
      DAT_141dc7a50 = (undefined8 **)local_228;
      cVar4 = FUN_140e491e0(&local_280);
      if (cVar4 != '\0') {
        local_288 = 0x30;
LAB_1407a1144:
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        *param_3 = (ulonglong)uVar12 << 0x20;
        if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_280);
        }
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        if ((1 << ((byte)local_264 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_270);
        }
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_260);
        }
        if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2a8);
        }
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        _eh_vector_destructor_iterator_(local_e8,0x10,8,FUN_140041b30);
        if (0 < (int)local_f8[0]) {
          puVar7 = local_f0;
          do {
            puVar8 = (undefined8 *)*puVar7;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar8);
            }
            *puVar8 = 0;
            *(undefined4 *)(puVar8 + 1) = 0;
            *(undefined4 *)((longlong)puVar8 + 0xc) = 5;
            puVar7 = puVar7 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        FUN_140e4cd60(local_f0);
        DAT_141dc7a50 = (undefined8 **)local_298;
        return param_3;
      }
    }
  } while( true );
}

