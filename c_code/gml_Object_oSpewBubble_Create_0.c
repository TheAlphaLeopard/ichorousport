// gml_Object_oSpewBubble_Create_0 @ 0x140d94140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oSpewBubble_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  longlong **local_res20;
  ulonglong uVar10;
  undefined4 uVar12;
  longlong ***ppplVar11;
  longlong ***in_stack_fffffffffffffd10;
  ulonglong uVar13;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  longlong *local_2d8;
  longlong *plStack_2d0;
  longlong *local_2c8;
  uint local_2bc;
  longlong *local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  longlong *local_2a8;
  uint uStack_29c;
  undefined8 local_298;
  char *local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined4 local_274;
  longlong *local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  longlong *local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  longlong *local_238;
  undefined4 local_22c;
  longlong *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong *local_218;
  undefined4 local_20c;
  longlong *local_208;
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  double local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8 [2];
  undefined1 local_1a8 [16];
  longlong *local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  longlong *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong **local_148;
  undefined1 *local_140;
  double *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  longlong *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_res18 = 0;
  local_290 = "gml_Object_oSpawnSwarm_Step_0";
  local_288 = 0;
  local_298 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_298;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_208,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_29c = 0xffffff;
  local_2a8 = (longlong *)0x0;
  local_2bc = 0xffffff;
  local_2c8 = (longlong *)0x0;
  uStack_23c = 0xffffff;
  local_248 = (longlong *)0x0;
  uStack_14c = 0xffffff;
  local_158 = (longlong *)0x0;
  uStack_dc = 0xffffff;
  local_e8 = (longlong *)0x0;
  uStack_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  local_274 = 0xffffff;
  local_280 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_18c = 0xffffff;
  local_198 = (longlong *)0x0;
  local_16c = 0xffffff;
  local_178 = 0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_fc = 0xffffff;
  local_108 = (longlong *)0x0;
  pplVar6 = (longlong **)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a01078);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_288 = 2;
  local_res20 = pplVar6;
  pplVar7 = (longlong **)FUN_140e8da20(&local_d8,local_res8,0);
  if (pplVar7 != &local_2a8) {
    local_268 = *pplVar7;
    uStack_260 = pplVar7[1];
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140041b80(&local_2a8,&local_268);
  }
  local_288 = 3;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2bc = 0;
  local_2c8 = (longlong *)0x0;
  local_288 = 4;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  local_268 = _DAT_1419ede50;
  uStack_260 = plRam00000001419ede58;
  if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  FUN_140041b80(&local_208,&local_268);
  local_148 = &local_208;
  ppplVar11 = &local_148;
  pplVar7 = (longlong **)gml_Script_OwnerY(local_res8,local_res10,&local_2e8,1,ppplVar11);
  if (pplVar7 != &local_248) {
    local_268 = *pplVar7;
    uStack_260 = pplVar7[1];
    if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_268);
  }
  local_288 = 6;
  uStack_2ac = 0xf;
  local_2b8 = (longlong *)0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,&local_2b8);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if (0 < iVar2) {
    do {
      local_288 = 8;
      uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      iVar2 = FUN_140e851f0(uVar8,&local_248,DAT_141955260,0);
      if (iVar2 == 0) {
        local_288 = 8;
      }
      else {
        local_288 = 9;
        uVar8 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57c50);
        uStack_2ac = 10;
        local_2b8 = (longlong *)0x0;
        iVar2 = FUN_140e851f0(uVar8,&local_2b8,DAT_141955260,0);
        if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        if (iVar2 == 0) {
          local_288 = 9;
        }
        else {
          local_288 = 0xb;
          if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2e8);
          }
          local_2e8 = 0;
          local_2e0 = 0;
          local_2dc = 5;
          local_22c = 6;
          local_238 = local_res8;
          uVar10 = (ulonglong)ppplVar11 & 0xffffffffffffff00;
          FUN_140e87440(&local_238,DAT_141a0a828,0x80000000,&local_158,uVar10,
                        (ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00);
          uVar12 = (undefined4)(uVar10 >> 0x20);
          if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_238);
          }
          local_148 = &local_2a8;
          uStack_260 = (longlong *)CONCAT44(uStack_14c,uStack_150);
          local_268 = local_158;
          if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1f8);
          }
          FUN_140041b80(local_1f8,&local_268);
          local_140 = local_1f8;
          in_stack_fffffffffffffd10 = &local_148;
          ppplVar11 = (longlong ***)CONCAT44(uVar12,DAT_1419fe568);
          FUN_140e634e0(local_res8,local_res10,&local_2e8,2,ppplVar11,in_stack_fffffffffffffd10);
        }
      }
      cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_c8,&local_res8,&local_res10);
  if (((uStack_29c == 2) && (local_2a8 != (longlong *)0x0)) &&
     (0 < *(int *)((longlong)local_2a8 + 0x24))) {
    iVar2 = 6;
    do {
      iVar2 = iVar2 + -1;
      local_288 = 0x13;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2e8 = 0;
      local_2e0 = 0;
      local_2dc = 5;
      puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7d8);
      local_22c = 6;
      local_238 = local_res8;
      uVar13 = (ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00;
      uVar10 = (ulonglong)ppplVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_238,DAT_1419fe0e8,0x80000000,&local_e8,uVar10,uVar13);
      if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      uStack_21c = 6;
      local_228 = local_res8;
      in_stack_fffffffffffffd10 = (longlong ***)(uVar13 & 0xffffffffffffff00);
      FUN_140e87440(&local_228,DAT_1419fe158,0x80000000,&local_f8,uVar10 & 0xffffffffffffff00,
                    in_stack_fffffffffffffd10);
      if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      plStack_2d0 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
      local_2d8 = local_e8;
      if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_208);
      }
      FUN_140041b80(&local_208,&local_2d8);
      local_148 = &local_208;
      plStack_2d0 = (longlong *)CONCAT44(uStack_ec,uStack_f0);
      local_2d8 = local_f8;
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2d8);
      local_140 = local_1f8;
      uStack_260 = (longlong *)CONCAT44(0xf,(undefined4)uStack_260);
      local_268 = (longlong *)0x100000000000012;
      local_2d8 = (longlong *)0x100000000000012;
      plStack_2d0 = uStack_260;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      FUN_140041b80(&local_1e8,&local_2d8);
      local_138 = &local_1e8;
      uVar8 = FUN_140e79480();
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_130 = &local_1d8;
      local_1d8 = uVar8;
      uVar8 = FUN_140e794b0();
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1bc = 0;
      local_128 = &local_1c8;
      local_1c8 = uVar8;
      if (puVar9 != local_1b8) {
        local_2d8 = (longlong *)*puVar9;
        plStack_2d0 = (longlong *)puVar9[1];
        if ((1 << ((byte)local_1b8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_1b8);
        }
        FUN_140041b80(local_1b8,&local_2d8);
      }
      local_120 = local_1b8;
      local_2d8 = _DAT_141ddb908;
      plStack_2d0 = (longlong *)uRam0000000141ddb910;
      if ((1 << (local_1a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_2d8);
      local_118 = local_1a8;
      puVar9 = (undefined8 *)FUN_140265f80(local_res8,local_res10,&local_2e8,7,&local_148);
      if (puVar9 != &local_280) {
        local_2d8 = (longlong *)*puVar9;
        plStack_2d0 = (longlong *)puVar9[1];
        if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_280);
        }
        FUN_140041b80(&local_280,&local_2d8);
      }
      local_288 = 0x14;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2e8 = 0;
      local_2e0 = 0;
      local_2dc = 5;
      puVar9 = (undefined8 *)gml_Script_deal_damage(local_res8,local_res10,&local_2e8,0,0);
      if (puVar9 != &local_188) {
        local_2d8 = (longlong *)*puVar9;
        plStack_2d0 = (longlong *)puVar9[1];
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_2d8);
      }
      FUN_140e87930(&local_280,DAT_141a1f0d0,0x80000000,&local_188);
      local_288 = 0x15;
      plStack_2d0 = (longlong *)CONCAT44(uStack_23c,uStack_240);
      local_2d8 = local_248;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_2d8);
      FUN_140e87930(&local_280,DAT_141a56cc0,0x80000000,&local_168);
      local_288 = 0x16;
      iVar3 = FUN_140e4a740(&local_2c8);
      pplVar6 = (longlong **)0x0;
      if (((uStack_29c & 0xffffff) == 2) && (local_2a8 != (longlong *)0x0)) {
        if ((iVar3 < 0) || (*(int *)((longlong)local_2a8 + 0x24) <= iVar3)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                        *(undefined4 *)((longlong)local_2a8 + 0x24));
        }
        else {
          pplVar6 = (longlong **)((longlong)iVar3 * 0x10 + local_2a8[1]);
        }
        if (pplVar6 != &local_198) goto LAB_140d94b7a;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        pplVar6 = &local_2a8;
LAB_140d94b7a:
        local_2d8 = *pplVar6;
        plStack_2d0 = pplVar6[1];
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_2d8);
      }
      FUN_140e87930(&local_280,DAT_141a1f440,0x80000000,&local_198);
      local_288 = 0x17;
      puVar9 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6018);
      uStack_2ac = *(undefined4 *)((longlong)puVar9 + 0xc);
      uStack_2b0 = *(undefined4 *)(puVar9 + 1);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
        local_2b8 = (longlong *)*puVar9;
      }
      else {
        FUN_1400419b0(&local_2b8,puVar9);
      }
      local_res18 = 1;
      local_20c = 0;
      local_218 = (longlong *)0x3fe8000000000000;
      FUN_140042560(&local_2b8,&local_218);
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      plStack_2d0 = (longlong *)CONCAT44(uStack_2ac,uStack_2b0);
      local_2d8 = local_2b8;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_2d8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140e87930(&local_280,DAT_1419f6018,0x80000000,&local_178);
      local_288 = 0x19;
      uVar4 = local_2bc & 0xffffff;
      if (uVar4 == 0) {
LAB_140d94d23:
        local_2c8 = (longlong *)((double)local_2c8 + 1.0);
      }
      else {
        if (uVar4 == 1) {
          local_2c8 = (longlong *)FUN_140e4b060(&local_2c8);
          local_2bc = 0;
          goto LAB_140d94d23;
        }
        if (uVar4 == 7) {
          local_2c8 = (longlong *)CONCAT44(local_2c8._4_4_,(int)local_2c8 + 1);
        }
        else if (uVar4 == 10) {
          local_2c8 = (longlong *)((longlong)local_2c8 + 1);
        }
        else {
          if (uVar4 == 0xd) {
            local_2bc = 0;
            goto LAB_140d94d23;
          }
          FUN_140042910(&DAT_14172c3d8,&local_2c8,&local_2c8);
        }
      }
      local_288 = 0x1a;
      if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2e8);
      }
      local_2e8 = 0;
      local_2e0 = 0;
      local_2dc = 5;
      local_148 = &local_2c8;
      local_2d8 = _DAT_141dc7760;
      plStack_2d0 = plRam0000000141dc7768;
      if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_2d8);
      local_140 = local_1f8;
      iVar3 = 0;
      if ((uStack_29c == 2) && (local_2a8 != (longlong *)0x0)) {
        iVar3 = *(int *)((longlong)local_2a8 + 0x24);
      }
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1dc = 0;
      local_1e8 = (double)iVar3;
      local_138 = &local_1e8;
      ppplVar11 = &local_148;
      pplVar6 = (longlong **)
                gml_RoomCC_rmGravePit01_0_Create(local_res8,local_res10,&local_2e8,3,ppplVar11);
      if (pplVar6 != &local_2c8) {
        local_2d8 = *pplVar6;
        plStack_2d0 = pplVar6[1];
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        FUN_140041b80(&local_2c8,&local_2d8);
      }
    } while (0 < iVar2);
    pplVar6 = local_res20;
  }
  local_288 = 0x1e;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_258 = 0;
  local_250 = 0;
  local_24c = 5;
  uVar13 = (ulonglong)in_stack_fffffffffffffd10 & 0xffffffffffffff00;
  uVar10 = (ulonglong)ppplVar11 & 0xffffffffffffff00;
  FUN_140e87440(uVar5,DAT_1419ef438,0x80000000,&local_108,uVar10,uVar13);
  local_20c = 6;
  local_218 = local_res8;
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a0a828,0x80000000,&local_158,uVar10,uVar13 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar10 >> 0x20);
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_228,gml_Object_oSpewBubble_Step_0,0);
  if (&local_228 != pplVar6) {
    plStack_2d0 = (longlong *)CONCAT44(uStack_21c,uStack_220);
    local_2d8 = local_228;
    if ((1 << ((byte)*(undefined4 *)((longlong)pplVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(pplVar6);
    }
    FUN_140041b80(pplVar6,&local_2d8);
  }
  FUN_140e60910(1);
  if (pplVar6 != &local_208) {
    local_2d8 = *pplVar6;
    plStack_2d0 = pplVar6[1];
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_2d8);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_148 = &local_208;
  plStack_2d0 = (longlong *)CONCAT44(uStack_14c,uStack_150);
  local_2d8 = local_158;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2d8);
  local_140 = local_1f8;
  plStack_2d0 = (longlong *)CONCAT44(uStack_fc,uStack_100);
  local_2d8 = local_108;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_2d8);
  local_138 = &local_1e8;
  puVar9 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_258,2,CONCAT44(uVar12,DAT_1419fd6d8),
                         &local_148);
  if (puVar9 != &local_1d8) {
    local_2d8 = (longlong *)*puVar9;
    plStack_2d0 = (longlong *)puVar9[1];
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    FUN_140041b80(&local_1d8,&local_2d8);
  }
  local_130 = &local_1d8;
  gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
            (local_res8,local_res10,&local_2e8,2,&local_138);
  local_288 = 0x1f;
  FUN_140edd0e0(local_res8,local_res10,0,0);
  if (local_b8 != 0) {
    FUN_140e4cd60();
    local_b8 = 0;
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_274 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_280);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  _eh_vector_destructor_iterator_(&local_208,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_298;
  return;
}

