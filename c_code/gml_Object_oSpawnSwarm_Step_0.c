// gml_Object_oSpawnSwarm_Step_0 @ 0x140d92590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSpawnSwarm_Step_0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  double *pdVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  undefined4 uVar13;
  double dVar14;
  double local_2e8;
  undefined4 local_2e0;
  uint local_2dc;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined4 local_2c0;
  uint local_2bc;
  double local_2b8;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  double local_2a8;
  undefined4 local_2a0;
  uint local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  double local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_244;
  double local_240;
  undefined4 local_238;
  uint local_234;
  double local_230;
  undefined4 local_228;
  uint local_224;
  double local_220;
  undefined4 local_218;
  uint local_214;
  double local_210;
  undefined4 local_208;
  uint local_204;
  double local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  double local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined4 local_158 [3];
  undefined4 local_14c;
  undefined4 local_148 [3];
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined4 local_128 [3];
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  double local_108;
  undefined4 uStack_fc;
  undefined4 local_f8 [3];
  undefined4 local_ec;
  undefined4 local_e8 [3];
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  local_270 = "gml_Object_oSparkParticle_Draw_0";
  local_268 = 0;
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  _eh_vector_constructor_iterator_(local_1d8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0.0;
  bVar12 = 0xff;
  local_15c = 0xffffff;
  local_168 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  uStack_1dc = 0xffffff;
  local_1e8 = 0.0;
  uStack_1ec = 0xffffff;
  local_1f8 = 0.0;
  uStack_16c = 0xffffff;
  local_178 = 0.0;
  uStack_17c = 0xffffff;
  local_188 = 0.0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_268 = 1;
  plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f68);
  iVar5 = 0;
  if ((*(int *)((longlong)plVar7 + 0xc) == 2) && (*plVar7 != 0)) {
    iVar5 = *(int *)(*plVar7 + 0x24);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2bc = 0;
  local_2c8 = (double)iVar5;
  local_268 = 2;
  uStack_27c = 0;
  local_288 = 2.0;
  iVar5 = FUN_140e851f0(&local_2c8,&local_288,DAT_141955260,1);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if (iVar5 == -2 || -1 < iVar5) {
    local_268 = 4;
    FUN_140e9c1f0();
    local_268 = 5;
    pdVar8 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f38);
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00f18);
    uStack_2ac = *(uint *)((longlong)pdVar8 + 0xc);
    uStack_2b0 = *(undefined4 *)(pdVar8 + 1);
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
      local_2b8 = *pdVar8;
    }
    else {
      FUN_1400419b0(&local_2b8,pdVar8);
    }
    FUN_140046500(&local_2b8,uVar9);
    local_29c = uStack_2ac;
    local_2a0 = uStack_2b0;
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
      local_2a8 = local_2b8;
    }
    else {
      FUN_1400419b0(&local_2a8,&local_2b8);
    }
    uStack_27c = 7;
    local_288 = (double)CONCAT44(local_288._4_4_,2);
    FUN_140042560(&local_2a8,&local_288);
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    if ((local_29c & 0xffffff) == 0) {
      dVar14 = local_2a8;
    }
    else {
      dVar14 = (double)FUN_140e4b060(&local_2a8);
    }
    uVar9 = FUN_140e78ec0(dVar14,0,0x3ff0000000000000);
    if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_250);
    }
    local_244 = 0;
    local_250 = uVar9;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    bVar3 = false;
    bVar2 = false;
    if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_268 = 6;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2dc = 0;
    local_2e8 = 0.0;
    bVar4 = true;
    uVar13 = 0xffffff;
    do {
      bVar12 = (byte)uVar13;
      if (!bVar4) {
        local_268 = 6;
        uVar6 = local_2dc & 0xffffff;
        if (uVar6 != 0) {
          if (uVar6 != 1) {
            if (uVar6 == 7) {
              local_2e8 = (double)CONCAT44(local_2e8._4_4_,local_2e8._0_4_ + 1);
            }
            else if (uVar6 == 10) {
              local_2e8 = (double)((longlong)local_2e8 + 1);
            }
            else {
              if (uVar6 == 0xd) goto LAB_140d929ab;
              FUN_140042910(&DAT_14172c3d8,&local_2e8,&local_2e8);
            }
            goto LAB_140d929ba;
          }
          local_2e8 = (double)FUN_140e4b060(&local_2e8);
LAB_140d929ab:
          local_2dc = 0;
        }
        local_2e8 = local_2e8 + 1.0;
      }
LAB_140d929ba:
      bVar4 = false;
      local_29c = local_2bc;
      local_2a0 = local_2c0;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
        local_2a8 = local_2c8;
      }
      else {
        FUN_1400419b0(&local_2a8,&local_2c8);
      }
      local_14c = 7;
      local_158[0] = 1;
      FUN_1400462a0(&local_2a8,local_158);
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      iVar5 = FUN_140e851f0(&local_2e8,&local_2a8,DAT_141955260,1);
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      if (iVar5 == -2 || -1 < iVar5) goto LAB_140d935c6;
      local_268 = 8;
      local_234 = local_2bc;
      local_238 = local_2c0;
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
        local_240 = local_2c8;
      }
      else {
        FUN_1400419b0(&local_240,&local_2c8);
      }
      local_13c = 7;
      local_148[0] = 1;
      FUN_1400462a0(&local_240,local_148);
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_148);
      }
      uStack_2ac = local_2dc;
      uStack_2b0 = local_2e0;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) == 0) {
        local_2b8 = local_2e8;
      }
      else {
        FUN_1400419b0(&local_2b8,&local_2e8);
      }
      FUN_140046500(&local_2b8,&local_240);
      dStack_2d0 = (double)CONCAT44(uStack_2ac,uStack_2b0);
      local_2d8 = local_2b8;
      if ((1 << (bVar12 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_2d8);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      if ((1 << ((byte)local_234 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_240);
      }
      local_268 = 9;
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      local_254 = 0;
      local_260 = 0x416fffffe0000000;
      local_268 = 0xb;
      local_12c = 0;
      local_138 = 0;
      iVar5 = FUN_140e851f0(&local_2e8,&local_138,DAT_141955260,0);
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar5 != 0) {
        local_268 = 0xc;
        local_224 = local_2bc;
        local_228 = local_2c0;
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) == 0) {
          local_230 = local_2c8;
        }
        else {
          FUN_1400419b0(&local_230,&local_2c8);
        }
        local_11c = 7;
        local_128[0] = 2;
        FUN_1400462a0(&local_230,local_128);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        iVar5 = FUN_140e851f0(&local_2e8,&local_230,DAT_141955260,1);
        if (iVar5 == -2 || -1 < iVar5) {
          local_10c = 0;
          local_118 = 15528.0;
          pdVar8 = &local_118;
          bVar2 = true;
        }
        else {
          uStack_fc = 0;
          local_108 = 40191.0;
          pdVar8 = &local_108;
          bVar3 = true;
        }
        local_2d8 = *pdVar8;
        dStack_2d0 = pdVar8[1];
        if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_260);
        }
        FUN_140041b80(&local_260,&local_2d8);
        if ((bVar2) && (bVar2 = false, (1 << ((byte)local_10c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_118);
        }
        if ((bVar3) && (bVar3 = false, (1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_108);
        }
        if ((1 << ((byte)local_224 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_230);
        }
      }
      local_268 = 0xe;
      uVar9 = FUN_140e4a8b0(&local_260);
      FUN_140e9c240(uVar9);
      local_268 = 0xf;
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_298 = 0;
      local_290 = 0;
      local_28c = 5;
      plVar10 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f68);
      plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f68);
      iVar5 = FUN_140e4a740(&local_2e8);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar11 = plVar10;
      }
      FUN_140e87170(plVar11,DAT_1419fe0e8,0x80000000,&local_1e8,param_1,param_2);
      iVar5 = FUN_140e4a740(&local_2e8);
      if (((*(uint *)((longlong)plVar10 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar10, lVar1 != 0))
      {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87170(plVar10,DAT_1419fe158,0x80000000,&local_1f8,param_1,param_2);
      local_214 = local_2dc;
      local_218 = local_2e0;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) == 0) {
        local_220 = local_2e8;
      }
      else {
        FUN_1400419b0(&local_220,&local_2e8);
      }
      local_ec = 7;
      local_f8[0] = 1;
      FUN_1400460e0(&local_220,local_f8);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_f8);
      }
      iVar5 = FUN_140e4a740(&local_220);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar10 = plVar7;
      }
      FUN_140e87170(plVar10,DAT_1419fe0e8,0x80000000,&local_178,param_1,param_2);
      if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_220);
      }
      local_204 = local_2dc;
      local_208 = local_2e0;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) == 0) {
        local_210 = local_2e8;
      }
      else {
        FUN_1400419b0(&local_210,&local_2e8);
      }
      local_dc = 7;
      local_e8[0] = 1;
      FUN_1400460e0(&local_210,local_e8);
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      iVar5 = FUN_140e4a740(&local_210);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      plVar10 = param_1;
      FUN_140e87170(plVar7,DAT_1419fe158,0x80000000,&local_188,param_1,param_2);
      uVar13 = (undefined4)((ulonglong)plVar10 >> 0x20);
      if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_210);
      }
      dStack_2d0 = (double)CONCAT44(uStack_1dc,uStack_1e0);
      local_2d8 = local_1e8;
      if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_2d8);
      local_d8 = local_1d8;
      dStack_2d0 = (double)CONCAT44(uStack_1ec,uStack_1f0);
      local_2d8 = local_1f8;
      if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_2d8);
      local_d0 = local_1c8;
      dStack_2d0 = (double)CONCAT44(uStack_16c,uStack_170);
      local_2d8 = local_178;
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_2d8);
      local_c8 = local_1b8;
      dStack_2d0 = (double)CONCAT44(uStack_17c,uStack_180);
      local_2d8 = local_188;
      if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_2d8);
      local_c0 = local_1a8;
      FUN_140e634e0(param_1,param_2,&local_298,4,CONCAT44(uVar13,DAT_141a0faa8),&local_d8);
      local_268 = 0x10;
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_298 = 0;
      local_290 = 0;
      local_28c = 5;
      plVar7 = (longlong *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00f68);
      iVar5 = FUN_140e4a740(&local_2e8);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar10 = plVar7;
      }
      FUN_140e87170(plVar10,DAT_1419fe0e8,0x80000000,&local_1e8,param_1,param_2);
      iVar5 = FUN_140e4a740(&local_2e8);
      if (((*(uint *)((longlong)plVar7 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar7, lVar1 != 0)) {
        if ((iVar5 < 0) || (*(int *)(lVar1 + 0x24) <= iVar5)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar5,
                        *(undefined4 *)(lVar1 + 0x24));
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar1 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
      }
      FUN_140e87170(plVar7,DAT_1419fe158,0x80000000,&local_1f8,param_1,param_2);
      dStack_2d0 = (double)CONCAT44(uStack_1dc,uStack_1e0);
      local_2d8 = local_1e8;
      if ((1 << (local_1d8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_2d8);
      local_d8 = local_1d8;
      dStack_2d0 = (double)CONCAT44(uStack_1ec,uStack_1f0);
      local_2d8 = local_1f8;
      if ((1 << (local_1c8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1c8);
      }
      FUN_140041b80(local_1c8,&local_2d8);
      local_d0 = local_1c8;
      uStack_27c = 0;
      local_288 = 24.0;
      FUN_140042560(&local_288,&local_250);
      dStack_2d0 = (double)CONCAT44(uStack_27c,uStack_280);
      local_2d8 = local_288;
      if ((1 << (local_1b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1b8);
      }
      FUN_140041b80(local_1b8,&local_2d8);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      local_c8 = local_1b8;
      uStack_9c = 0xf;
      local_a8 = 0x100000100000021;
      dStack_2d0 = (double)CONCAT44(0xf,uStack_a0);
      local_2d8 = 7.291128972912259e-304;
      if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_2d8);
      local_c0 = local_1a8;
      local_2d8 = DAT_1419df7b0;
      dStack_2d0 = (double)_DAT_1419df7b8;
      if ((1 << (local_198[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_198);
      }
      FUN_140041b80(local_198,&local_2d8);
      local_b8 = local_198;
      gml_Script____struct___139_light_flash_create_lighting_system
                (param_1,param_2,&local_298,5,&local_d8);
      uVar13 = local_15c;
    } while( true );
  }
  local_268 = 2;
LAB_140d935de:
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << (bVar12 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  _eh_vector_destructor_iterator_(local_1d8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return;
LAB_140d935c6:
  local_268 = 0x12;
  FUN_140e9c240(0xffffff);
  goto LAB_140d935de;
}

