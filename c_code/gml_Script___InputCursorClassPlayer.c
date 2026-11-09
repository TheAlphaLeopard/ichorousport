// gml_Script___InputCursorClassPlayer @ 0x140081f90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputCursorClassPlayer(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 **ppuVar8;
  undefined4 uVar9;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_44;
  
  local_1a0 = "gml_Script___Update@anon@771@__InputCursorClassPlayer@__InputCursorClassPlayer";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x20;
  _eh_vector_constructor_iterator_(&local_108,0x10,7,FUN_1400424d0,FUN_140041b30);
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  local_174 = 0xffffff;
  local_180 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_44 = 0xffffff;
  local_50 = 0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_184 = 0;
  local_190 = 0;
  local_144 = 0;
  local_150 = 0;
  local_154 = 0;
  local_160 = 0;
  local_164 = 0;
  local_170 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x22;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe4a8);
  FUN_140e609c0(param_1);
  if (puVar3 != puVar4) {
    local_1f8 = *puVar3;
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_1f8);
  }
  FUN_140e60910(1);
  local_198 = 0x23;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe398);
  FUN_140e609c0(param_1);
  if (puVar4 != puVar5) {
    local_1f8 = *puVar4;
    uStack_1f0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_1f8);
  }
  FUN_140e60910(1);
  local_198 = 0x25;
  if (puVar3 != &local_1b8) {
    local_1f8 = *puVar3;
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1f8);
  }
  local_198 = 0x26;
  if (puVar4 != &local_1c8) {
    local_1f8 = *puVar4;
    uStack_1f0 = *(undefined4 *)(puVar4 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    FUN_140041b80(&local_1c8,&local_1f8);
  }
  local_198 = 0x27;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd7f8);
  if (puVar3 != &local_180) {
    local_1f8 = *puVar3;
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    FUN_140041b80(&local_180,&local_1f8);
  }
  local_198 = 0x29;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  local_98 = &local_180;
  local_1f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_1f0 = DAT_1419df7b8;
  uStack_1ec = DAT_1419df7bc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_1f8);
  local_90 = &local_f8;
  ppuVar8 = &local_98;
  uVar6 = gml_Script_InputPlayerUsingTouch(param_1,param_2,&local_1e8,2,ppuVar8);
  uVar9 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    local_198 = 0x2b;
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    local_190 = 0;
    local_188 = 0;
    local_184 = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fe328);
    (**(code **)(*param_1 + 8))(param_1,DAT_1419fe528);
    uVar7 = CONCAT44(uVar9,DAT_141a00c78);
    uVar6 = FUN_140e634e0(param_1,param_2,&local_190,0,uVar7,0);
    uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
    cVar1 = FUN_140e491e0(uVar6);
    if (cVar1 == '\0') {
      local_198 = 0x31;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      uVar6 = gml_Script_InputMousePressed(param_1,param_2,&local_1e8,0,0);
      cVar1 = FUN_140e491e0(uVar6);
      if (cVar1 != '\0') {
        local_198 = 0x35;
        if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_190);
        }
        local_190 = 0;
        local_188 = 0;
        local_184 = 5;
        puVar3 = (undefined8 *)gml_Script_InputMouseRoomY(param_1,param_2,&local_190,0,0);
        if (puVar3 != &local_1b8) {
          local_1f8 = *puVar3;
          uStack_1f0 = *(undefined4 *)(puVar3 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          FUN_140041b80(&local_1b8,&local_1f8);
        }
        local_198 = 0x36;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = 0;
        local_1e0 = 0;
        local_1dc = 5;
        puVar3 = (undefined8 *)gml_Script_InputMouseSetBlocked(param_1,param_2,&local_1e8,0,0);
        if (puVar3 != &local_1c8) {
          local_1f8 = *puVar3;
          uStack_1f0 = *(undefined4 *)(puVar3 + 1);
          uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          FUN_140041b80(&local_1c8,&local_1f8);
        }
      }
    }
    else {
      local_198 = 0x2d;
      if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_150);
      }
      local_150 = 0;
      local_148 = 0;
      local_144 = 5;
      if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_160);
      }
      local_160 = 0;
      local_158 = 0;
      local_154 = 5;
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      local_170 = 0;
      local_168 = 0;
      local_164 = 5;
      uVar6 = CONCAT44(uVar9,DAT_141a00ca8);
      puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_160,0,uVar6,0);
      uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (puVar3 != &local_e8) {
        local_1f8 = *puVar3;
        uStack_1f0 = *(undefined4 *)(puVar3 + 1);
        uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e8);
        }
        FUN_140041b80(&local_e8,&local_1f8);
      }
      local_88 = &local_e8;
      puVar3 = (undefined8 *)
               FUN_140e634e0(param_1,param_2,&local_170,0,CONCAT44(uVar9,DAT_141a00d68),0);
      if (puVar3 != &local_d8) {
        local_1f8 = *puVar3;
        uStack_1f0 = *(undefined4 *)(puVar3 + 1);
        uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        FUN_140041b80(&local_d8,&local_1f8);
      }
      local_80 = &local_d8;
      local_1f8 = CONCAT44(uRam00000001419dfe14,_DAT_1419dfe10);
      uStack_1f0 = uRam00000001419dfe18;
      uStack_1ec = uRam00000001419dfe1c;
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_c8);
      }
      FUN_140041b80(local_c8,&local_1f8);
      local_78 = local_c8;
      local_1f8 = CONCAT44(uRam0000000141dc6014,_DAT_141dc6010);
      uStack_1f0 = uRam0000000141dc6018;
      uStack_1ec = uRam0000000141dc601c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1f8);
      local_70 = local_b8;
      local_1f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1f0 = DAT_1419df7b8;
      uStack_1ec = DAT_1419df7bc;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_1f8);
      local_68 = local_a8;
      puVar3 = (undefined8 *)FUN_140087c90(param_1,param_2,&local_150,5,&local_88);
      if (puVar3 != &local_120) {
        local_1f8 = *puVar3;
        uStack_1f0 = *(undefined4 *)(puVar3 + 1);
        uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_1f8);
      }
      local_198 = 0x2e;
      FUN_140e87170(&local_120,DAT_1419fe0e8,0x80000000,&local_50,param_1,param_2);
      FUN_1400460e0(&local_1b8,&local_50);
      local_198 = 0x2f;
      FUN_140e87170(&local_120,DAT_1419fe158,0x80000000,&local_60,param_1,param_2);
      FUN_1400460e0(&local_1c8,&local_60);
    }
  }
  local_198 = 0x45;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  local_1f8 = CONCAT44(uRam00000001419dfe04,_DAT_1419dfe00);
  uStack_1f0 = uRam00000001419dfe08;
  uStack_1ec = uRam00000001419dfe0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1f8);
  local_98 = &local_108;
  local_90 = &local_180;
  puVar3 = (undefined8 *)gml_Script_InputXYNewest(param_1,param_2,&local_1e8,2,&local_98);
  if (puVar3 != &local_130) {
    local_1f8 = *puVar3;
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_130);
    }
    FUN_140041b80(&local_130,&local_1f8);
  }
  local_198 = 0x46;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  local_1f8 = CONCAT44(uRam00000001419dfe04,_DAT_1419dfe00);
  uStack_1f0 = uRam00000001419dfe08;
  uStack_1ec = uRam00000001419dfe0c;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_1f8);
  local_98 = &local_108;
  local_90 = &local_180;
  ppuVar8 = &local_98;
  puVar3 = (undefined8 *)FUN_14038fcd0(param_1,param_2,&local_1e8,2,ppuVar8);
  uVar9 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
  if (puVar3 != &local_140) {
    local_1f8 = *puVar3;
    uStack_1f0 = *(undefined4 *)(puVar3 + 1);
    uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_1f8);
  }
  local_198 = 0x48;
  uStack_1ec = 0;
  local_1f8 = 0;
  iVar2 = FUN_140e851f0(&local_130,&local_1f8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (iVar2 == 0) {
    uStack_1ec = 0;
    local_1f8 = 0;
    iVar2 = FUN_140e851f0(&local_140,&local_1f8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if (iVar2 == 0) goto LAB_140083048;
  }
  local_198 = 0x52;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00db8);
  local_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_1d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_1d8,puVar3);
  }
  FUN_140042560(&local_1d8,&local_130);
  FUN_1400460e0(&local_1b8,&local_1d8);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_198 = 0x53;
  local_1cc = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_1d0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_1d8,puVar3);
  }
  FUN_140042560(&local_1d8,&local_140);
  FUN_1400460e0(&local_1c8,&local_1d8);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_198 = 0x56;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00e18);
  uStack_1ec = 0;
  local_1f8 = 0;
  iVar2 = FUN_140e851f0(uVar6,&local_1f8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if (0 < iVar2) {
    local_198 = 0x58;
    (**(code **)(*param_1 + 8))(param_1,DAT_141a00db8);
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00e18);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe4a8);
    local_1cc = uStack_1ac;
    local_1d0 = uStack_1b0;
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_1b8;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_1b8);
    }
    FUN_1400462a0(&local_1d8,uVar7);
    uStack_1ec = local_1cc;
    uStack_1f0 = local_1d0;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_1d8);
    }
    FUN_140046500(&local_1f8,uVar6);
    FUN_1400460e0(&local_1b8,&local_1f8);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_198 = 0x59;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00e18);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fe398);
    local_1cc = uStack_1bc;
    local_1d0 = uStack_1c0;
    if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) == 0) {
      local_1d8 = local_1c8;
    }
    else {
      FUN_1400419b0(&local_1d8,&local_1c8);
    }
    FUN_1400462a0(&local_1d8,uVar7);
    uStack_1ec = local_1cc;
    uStack_1f0 = local_1d0;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
      local_1f8 = local_1d8;
    }
    else {
      FUN_1400419b0(&local_1f8,&local_1d8);
    }
    FUN_140046500(&local_1f8,uVar6);
    FUN_1400460e0(&local_1c8,&local_1f8);
    if ((1 << ((byte)uStack_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_198 = 0x5a;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00e18);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00cd8);
    local_98 = &local_1b8;
    if (puVar4 != &local_f8) {
      local_1f8 = *puVar4;
      uStack_1f0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1f8);
    }
    local_90 = &local_f8;
    if (puVar3 != &local_e8) {
      local_1f8 = *puVar3;
      uStack_1f0 = *(undefined4 *)(puVar3 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1f8);
    }
    local_88 = &local_e8;
    uVar6 = CONCAT44(uVar9,DAT_141a00c58);
    puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1e8,3,uVar6,&local_98);
    uVar9 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (puVar3 != &local_1b8) {
      local_1f8 = *puVar3;
      uStack_1f0 = *(undefined4 *)(puVar3 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140041b80(&local_1b8,&local_1f8);
    }
    local_198 = 0x5b;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00e18);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a00e48);
    local_98 = &local_1c8;
    if (puVar4 != &local_f8) {
      local_1f8 = *puVar4;
      uStack_1f0 = *(undefined4 *)(puVar4 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1f8);
    }
    local_90 = &local_f8;
    if (puVar3 != &local_e8) {
      local_1f8 = *puVar3;
      uStack_1f0 = *(undefined4 *)(puVar3 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_1f8);
    }
    local_88 = &local_e8;
    puVar3 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_1e8,3,CONCAT44(uVar9,DAT_141a00c58),&local_98);
    if (puVar3 != &local_1c8) {
      local_1f8 = *puVar3;
      uStack_1f0 = *(undefined4 *)(puVar3 + 1);
      uStack_1ec = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140041b80(&local_1c8,&local_1f8);
    }
  }
LAB_140083048:
  local_198 = 0x5f;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe328);
  FUN_140e609c0(param_1);
  if (&local_1b8 != puVar3) {
    local_1f8 = local_1b8;
    uStack_1f0 = uStack_1b0;
    uStack_1ec = uStack_1ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1f8);
  }
  FUN_140e60910(1);
  local_198 = 0x60;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe528);
  FUN_140e609c0(param_1);
  if (&local_1c8 != puVar3) {
    local_1f8 = local_1c8;
    uStack_1f0 = uStack_1c0;
    uStack_1ec = uStack_1bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_1f8);
  }
  FUN_140e60910(1);
  local_198 = 0x62;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a00dc8);
  FUN_140e63610(param_1,param_2,&local_1e8,0,uVar6,0);
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_160);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

