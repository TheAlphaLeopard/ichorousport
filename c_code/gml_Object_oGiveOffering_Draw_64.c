// gml_Object_oGiveOffering_Draw_64 @ 0x140af5bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oGiveOffering_Draw_64
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  undefined8 *puVar9;
  undefined4 uVar12;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  double local_1c8;
  uint local_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  uint local_19c;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined1 *local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  byte local_f4;
  undefined8 local_e0 [2];
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_140 = "gml_Script_anon@386@gml_Object_oGiveOffering_Create_0";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x17;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_100,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef2d8);
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1cc = 0;
  local_1d8 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x19;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_1c8 = 0.0;
  local_138 = 0x1a;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  puVar9 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_140af5dab:
    local_158 = (undefined1 *)*puVar7;
    uStack_150 = puVar7[1];
    if ((1 << ((byte)_local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_158);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_100) goto LAB_140af5dab;
  }
  local_198 = &local_100;
  uVar11 = CONCAT44(uVar12,DAT_141a0aa48);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar11,&local_198);
  if (puVar7 != &local_a0) {
    local_158 = (undefined1 *)*puVar7;
    uStack_150 = puVar7[1];
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_158);
  }
  local_138 = 0x1b;
  uStack_150 = CONCAT44(0xd,(undefined4)uStack_150);
  local_158 = (undefined1 *)0x0;
  local_88 = 0;
  uStack_80 = uStack_150;
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  FUN_140041b80(&local_130,&local_88);
  local_138 = 0x1c;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*param_5;
  }
  iVar4 = FUN_140e851f0(puVar7,uVar6,DAT_141955260,0);
  if (iVar4 == 0) {
    uStack_104 = DAT_141dd93e4;
    uStack_108 = DAT_141dd93e0;
    if ((1 << ((byte)DAT_141dd93e4 & 0x1f) & 0x46U) == 0) {
      local_110 = DAT_141dd93d8;
    }
    else {
      FUN_1400419b0(&local_110,&DAT_141dd93d8);
    }
    ppuVar8 = &local_110;
    bVar2 = true;
    bVar1 = false;
  }
  else {
    local_164 = DAT_141dd9404;
    local_168 = DAT_141dd9400;
    if ((1 << ((byte)DAT_141dd9404 & 0x1f) & 0x46U) == 0) {
      local_170 = DAT_141dd93f8;
    }
    else {
      FUN_1400419b0(&local_170,&DAT_141dd93f8);
    }
    ppuVar8 = &local_170;
    bVar2 = false;
    bVar1 = true;
  }
  local_158 = *ppuVar8;
  uStack_150._0_4_ = *(undefined4 *)(ppuVar8 + 1);
  uStack_150._4_4_ = *(undefined4 *)((longlong)ppuVar8 + 0xc);
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  FUN_140041b80(&local_b0,&local_158);
  if ((bVar1) && ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_170);
  }
  if ((bVar2) && ((1 << ((byte)uStack_104 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_110);
  }
  do {
    do {
      uVar12 = (undefined4)(uVar11 >> 0x20);
      local_138 = 0x20;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
LAB_140af6020:
        local_1b8 = *(undefined4 *)puVar7;
        uStack_1b4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_1b0 = *(undefined4 *)(puVar7 + 1);
        uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)_local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        FUN_140041b80(&local_100,&local_1b8);
      }
      else {
        puVar7 = (undefined8 *)*param_5;
        if (puVar7 != &local_100) goto LAB_140af6020;
      }
      local_198 = &local_100;
      uVar6 = FUN_140e634e0(param_1,param_2,&local_1d8,1,CONCAT44(uVar12,DAT_1419f3378),&local_198);
      uVar5 = FUN_140e851f0(&local_1c8,uVar6,DAT_141955260,1);
      if (uVar5 < 0x80000000) {
        local_138 = 0x22;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        local_180 = 0;
        local_178 = 0;
        local_174 = 5;
        local_190 = &local_a0;
        local_1b8 = _DAT_141dd9408;
        uStack_1b4 = uRam0000000141dd940c;
        uStack_1b0 = uRam0000000141dd9410;
        uStack_1ac = DAT_141dd9414;
        if ((1 << ((byte)local_e0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e0);
        }
        FUN_140041b80(local_e0,&local_1b8);
        local_188 = local_e0;
        uVar6 = FUN_14022ffd0(param_1,param_2,&local_180,2,&local_190);
        uStack_104 = 0;
        local_110 = &DAT_bff0000000000000;
        iVar4 = FUN_140e851f0(uVar6,&local_110,DAT_141955260,0);
        if ((1 << ((byte)uStack_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_130);
        }
        local_124 = 0xd;
        if (iVar4 == 0) {
          local_130 = 0;
        }
        else {
          local_130 = 0x3ff0000000000000;
        }
        local_138 = 0x24;
        cVar3 = FUN_140e491e0(&local_130);
        if (cVar3 == '\0') {
          local_138 = 0x27;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          FUN_14040a500(param_1,param_2,&local_1d8,0,0);
        }
        else {
          local_138 = 0x25;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          FUN_1403ed380(param_1,param_2,&local_1d8,0,0);
        }
      }
      local_138 = 0x2a;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
LAB_140af6296:
        local_1b8 = *(undefined4 *)puVar7;
        uStack_1b4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_1b0 = *(undefined4 *)(puVar7 + 1);
        uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)_local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        FUN_140041b80(&local_100,&local_1b8);
      }
      else {
        puVar7 = (undefined8 *)*param_5;
        if (puVar7 != &local_100) goto LAB_140af6296;
      }
      local_198 = &local_100;
      ppuVar10 = &local_198;
      puVar7 = (undefined8 *)gml_Script_current_ms(param_1,param_2,&local_1d8,1,ppuVar10);
      uVar12 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
      if (puVar7 != &local_120) {
        local_1b8 = *(undefined4 *)puVar7;
        uStack_1b4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_1b0 = *(undefined4 *)(puVar7 + 1);
        uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_1b8);
      }
      local_138 = 0x2b;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
LAB_140af6368:
        local_1b8 = *(undefined4 *)puVar7;
        uStack_1b4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_1b0 = *(undefined4 *)(puVar7 + 1);
        uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)_local_f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_100);
        }
        FUN_140041b80(&local_100,&local_1b8);
      }
      else {
        puVar7 = (undefined8 *)*param_5;
        if (puVar7 != &local_100) goto LAB_140af6368;
      }
      local_198 = &local_100;
      local_190 = &local_120;
      ppuVar10 = &local_198;
      uVar11 = CONCAT44(uVar12,DAT_141a01138);
      puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar11,ppuVar10);
      if (puVar7 != &local_c0) {
        local_1b8 = *(undefined4 *)puVar7;
        uStack_1b4 = *(undefined4 *)((longlong)puVar7 + 4);
        uStack_1b0 = *(undefined4 *)(puVar7 + 1);
        uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c0);
        }
        FUN_140041b80(&local_c0,&local_1b8);
      }
      local_138 = 0x2d;
      uVar5 = local_1bc & 0xffffff;
      if (uVar5 == 0) {
LAB_140af645f:
        local_1c8 = local_1c8 + 1.0;
      }
      else {
        if (uVar5 == 1) {
          local_1c8 = (double)FUN_140e4b060(&local_1c8);
          local_1bc = 0;
          goto LAB_140af645f;
        }
        if (uVar5 == 7) {
          local_1c8 = (double)CONCAT44(local_1c8._4_4_,local_1c8._0_4_ + 1);
        }
        else if (uVar5 == 10) {
          local_1c8 = (double)((longlong)local_1c8 + 1);
        }
        else {
          if (uVar5 == 0xd) {
            local_1bc = 0;
            goto LAB_140af645f;
          }
          FUN_140042910(&DAT_14172c3d8,&local_1c8,&local_1c8);
        }
      }
      uVar11 = uVar11 & 0xffffffffffffff00;
      FUN_140e87440(&local_c0,DAT_141a0ab58,0x80000000,&local_78,uVar11,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00);
      uStack_80 = uStack_80 & 0xffffffff;
      local_88 = 0;
      iVar4 = FUN_140e851f0(&local_78,&local_88,DAT_141955260,1);
      if ((1 << ((byte)(uStack_80 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
    } while (iVar4 < 1);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    local_198 = &local_b0;
    local_190 = &local_120;
    ppuVar10 = &local_198;
    uVar6 = gml_Script_rolled_list_clear(param_1,param_2,&local_1d8,2,ppuVar10);
    uVar12 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
    cVar3 = FUN_140e491e0(uVar6);
    if (cVar3 == '\0') break;
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    local_180 = 0;
    local_178 = 0;
    local_174 = 5;
    if (param_4 < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_140af65c8:
      local_1b8 = *(undefined4 *)puVar7;
      uStack_1b4 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_1b0 = *(undefined4 *)(puVar7 + 1);
      uStack_1ac = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)local_e0[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e0);
      }
      FUN_140041b80(local_e0,&local_1b8);
    }
    else {
      puVar7 = (undefined8 *)*param_5;
      if (puVar7 != local_e0) goto LAB_140af65c8;
    }
    local_188 = local_e0;
    uVar11 = CONCAT44(uVar12,DAT_1419f3378);
    puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_180,1,uVar11,&local_188);
    local_164 = *(undefined4 *)((longlong)puVar7 + 0xc);
    local_168 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) == 0) {
      local_170 = (undefined1 *)*puVar7;
    }
    else {
      FUN_1400419b0(&local_170,puVar7);
    }
    uStack_150._4_4_ = 7;
    local_158 = (undefined1 *)CONCAT44(local_158._4_4_,4);
    FUN_140042560(&local_170,&local_158);
    if ((1 << ((byte)uStack_150._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    iVar4 = FUN_140e851f0(&local_1c8,&local_170,DAT_141955260,1);
    if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    uVar12 = (undefined4)(uVar11 >> 0x20);
  } while (iVar4 < 1);
  local_138 = 0x31;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  if ((param_4 < 1) || (puVar9 = (undefined8 *)*param_5, puVar9 != &local_100)) {
    local_1b8 = *(undefined4 *)puVar9;
    uStack_1b4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1b0 = *(undefined4 *)(puVar9 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << (local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    FUN_140041b80(&local_100,&local_1b8);
  }
  local_198 = &local_100;
  local_190 = &local_120;
  ppuVar10 = &local_198;
  uVar11 = CONCAT44(uVar12,DAT_141a01138);
  puVar9 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar11,ppuVar10);
  if (puVar9 != &local_d0) {
    local_1b8 = *(undefined4 *)puVar9;
    uStack_1b4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1b0 = *(undefined4 *)(puVar9 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    FUN_140041b80(&local_d0,&local_1b8);
  }
  FUN_140e87440(&local_d0,DAT_141a0ab58,0x80000000,&local_1a8,uVar11 & 0xffffffffffffff00,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar5 = local_19c & 0xffffff;
  if (uVar5 != 0) {
    if (uVar5 == 1) {
      local_1a8 = (double)FUN_140e4b060(&local_1a8);
      local_1a8 = local_1a8 - 1.0;
      local_19c = 0;
      goto LAB_140af6848;
    }
    if (uVar5 == 7) {
      local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + -1);
      goto LAB_140af6848;
    }
    if (uVar5 == 10) {
      local_1a8 = (double)((longlong)local_1a8 + -1);
      goto LAB_140af6848;
    }
    if (uVar5 != 0xd) {
      FUN_140042910(&DAT_14172c450,&local_1a8,&local_1a8);
      goto LAB_140af6848;
    }
    local_19c = 0;
  }
  local_1a8 = local_1a8 + -1.0;
LAB_140af6848:
  FUN_140e87930(&local_d0,DAT_141a0ab58,0x80000000,&local_1a8);
  local_138 = 0x32;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  local_198 = &local_b0;
  local_190 = &local_120;
  ppuVar10 = &local_198;
  gml_Script_rolled_list_new_run(param_1,param_2,&local_1d8,2,ppuVar10);
  uVar12 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
  local_138 = 0x34;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_1d8 = 0;
  local_1d0 = 0;
  local_1cc = 5;
  local_198 = &local_c0;
  puVar9 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_1d8,1,CONCAT44(uVar12,DAT_1419fd0c8),&local_198);
  if (puVar9 != param_3) {
    local_1b8 = *(undefined4 *)puVar9;
    uStack_1b4 = *(undefined4 *)((longlong)puVar9 + 4);
    uStack_1b0 = *(undefined4 *)(puVar9 + 1);
    uStack_1ac = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1b8);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  _eh_vector_destructor_iterator_(&local_100,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

