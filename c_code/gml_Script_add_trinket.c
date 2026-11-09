// gml_Script_add_trinket @ 0x1405df450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_add_trinket(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auVar1 [12];
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  uint local_19c;
  undefined4 local_198;
  longlong local_190;
  uint local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  longlong local_170;
  byte local_164;
  undefined1 local_160 [12];
  byte local_154;
  undefined1 local_150 [12];
  byte local_144;
  undefined8 local_140;
  char *local_138;
  undefined4 local_130;
  longlong *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_198 = 0;
  local_138 = "gml_Script_check_trinket_achievements";
  local_140 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_140;
  local_130 = 0x26;
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_170,0x10,3,FUN_1400424d0,FUN_140041b30);
  plVar7 = (longlong *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57320);
  local_184 = 0xffffff;
  local_190 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_130 = 0x27;
  if (plVar7 != &local_170) {
    local_d8 = *plVar7;
    uStack_d0 = plVar7[1];
    if ((1 << ((byte)_local_164 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_170);
    }
    FUN_140041b80(&local_170,&local_d8);
  }
  local_128 = &local_170;
  plVar7 = (longlong *)
           FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar12,DAT_141a0aa48),&local_128);
  uVar9 = extraout_XMM0_Qb;
  if (plVar7 != &local_190) {
    local_d8 = *plVar7;
    uStack_d0 = plVar7[1];
    if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_d8);
    uVar9 = extraout_XMM0_Qb_00;
  }
  local_130 = 0x28;
  auVar1._4_8_ = uVar9;
  auVar1._0_4_ = local_e8._4_4_;
  auVar11._0_8_ = auVar1._0_8_ << 0x20;
  auVar11._8_4_ = (undefined4)uStack_e0;
  auVar11._12_4_ = 0xd;
  uStack_e0 = auVar11._8_8_;
  local_e8 = 1.0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = uStack_e0;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_d8);
  local_130 = 0x29;
  local_e8 = 1.0;
  uVar12 = (undefined4)uStack_e0;
  uStack_e0 = CONCAT44(0xd,uVar12);
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = CONCAT44(0xd,uVar12);
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  FUN_140041b80(&local_110,&local_d8);
  local_130 = 0x2b;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_19c = 0;
  local_1a8 = 0.0;
  bVar2 = true;
  do {
    plVar7 = (longlong *)0x0;
    if (!bVar2) {
      local_130 = 0x2b;
      uVar5 = local_19c & 0xffffff;
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          if (uVar5 == 7) {
            local_1a8 = (double)CONCAT44(local_1a8._4_4_,local_1a8._0_4_ + 1);
          }
          else if (uVar5 == 10) {
            local_1a8 = (double)((longlong)local_1a8 + 1);
          }
          else {
            if (uVar5 == 0xd) {
              local_19c = 0;
              goto LAB_1405df70c;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1a8,&local_1a8);
          }
          goto LAB_1405df716;
        }
        local_1a8 = (double)FUN_140e4b060(&local_1a8);
        local_19c = 0;
      }
LAB_1405df70c:
      local_1a8 = local_1a8 + 1.0;
    }
LAB_1405df716:
    bVar2 = false;
    plVar10 = plVar7;
    if ((local_184 == 2) && (local_190 != 0)) {
      plVar10 = (longlong *)(ulonglong)*(uint *)(local_190 + 0x24);
    }
    uStack_e0 = uStack_e0 & 0xffffffff;
    local_e8 = (double)(int)plVar10;
    iVar6 = FUN_140e851f0(&local_1a8,&local_e8,DAT_141955260,1);
    if ((1 << ((byte)(uStack_e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if (iVar6 == -2 || -1 < iVar6) {
      local_130 = 0x32;
      cVar4 = FUN_140e491e0(&local_100);
      if (cVar4 != '\0') {
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        local_1b8 = _DAT_141dd4918;
        uStack_1b0 = uRam0000000141dd4920;
        if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        FUN_140041b80(&local_170,&local_1b8);
        local_128 = &local_170;
        local_1b8 = _DAT_1419df7a0;
        uStack_1b0 = uRam00000001419df7a8;
        if ((1 << (local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_160);
        }
        FUN_140041b80(local_160,&local_1b8);
        local_120 = local_160;
        uVar9 = gml_Script____struct___106(param_1,param_2,&local_1c8,2,&local_128);
        cVar4 = FUN_140e491e0(uVar9);
        if (cVar4 == '\0') {
          local_130 = 0x33;
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          local_180 = 0;
          local_178 = 0;
          local_174 = 5;
          local_1b8 = _DAT_141dd4ee8;
          uStack_1b0 = uRam0000000141dd4ef0;
          if ((1 << (local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_150);
          }
          FUN_140041b80(local_150,&local_1b8);
          local_118 = local_150;
          gml_Script_steam_track_death_count(param_1,param_2,&local_180,1,&local_118);
        }
      }
      local_130 = 0x35;
      cVar4 = FUN_140e491e0(&local_110);
      if (cVar4 != '\0') {
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        local_1b8 = _DAT_141dd4ed8;
        uStack_1b0 = uRam0000000141dd4ee0;
        if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        FUN_140041b80(&local_170,&local_1b8);
        local_128 = &local_170;
        local_1b8 = _DAT_1419df7a0;
        uStack_1b0 = uRam00000001419df7a8;
        if ((1 << (local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_160);
        }
        FUN_140041b80(local_160,&local_1b8);
        local_120 = local_160;
        uVar9 = gml_Script____struct___106(param_1,param_2,&local_1c8,2,&local_128);
        cVar4 = FUN_140e491e0(uVar9);
        if (cVar4 == '\0') {
          local_130 = 0x36;
          if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_180);
          }
          local_180 = 0;
          local_178 = 0;
          local_174 = 5;
          local_1b8 = _DAT_141dd4de8;
          uStack_1b0 = uRam0000000141dd4df0;
          if ((1 << (local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_150);
          }
          FUN_140041b80(local_150,&local_1b8);
          local_118 = local_150;
          gml_Script_steam_track_death_count(param_1,param_2,&local_180,1,&local_118);
        }
      }
      if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_180);
      }
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_110);
      }
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      _eh_vector_destructor_iterator_(&local_170,0x10,3,FUN_140041b30);
      DAT_141dc7a50 = (undefined8 *)local_140;
      return param_3;
    }
    local_130 = 0x2c;
    local_6c = DAT_141dd4d94;
    local_70 = DAT_141dd4d90;
    if ((1 << ((byte)DAT_141dd4d94 & 0x1f) & 0x46U) == 0) {
      local_78 = DAT_141dd4d88;
    }
    else {
      FUN_1400419b0(&local_78,&DAT_141dd4d88);
    }
    iVar6 = FUN_140e4a740(&local_1a8);
    if (((local_184 & 0xffffff) == 2) && (local_190 != 0)) {
      if ((iVar6 < 0) || (*(int *)(local_190 + 0x24) <= iVar6)) {
        FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                      *(undefined4 *)(local_190 + 0x24));
      }
      else {
        plVar7 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(local_190 + 8));
      }
    }
    else {
      FUN_140e632c0("trying to index variable that is not an array");
      plVar7 = &local_190;
    }
    iVar6 = FUN_140e851f0(plVar7,&local_78,DAT_141955260,0);
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if (iVar6 == 0) {
      local_130 = 0x2c;
    }
    else {
      local_130 = 0x2d;
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1c8 = 0;
      local_1c0 = 0;
      local_1bc = 5;
      local_ac = DAT_141dd4da4;
      local_b0 = DAT_141dd4da0;
      if ((1 << ((byte)DAT_141dd4da4 & 0x1f) & 0x46U) == 0) {
        local_b8 = DAT_141dd4d98;
      }
      else {
        FUN_1400419b0(&local_b8,&DAT_141dd4d98);
      }
      uVar3 = local_ac;
      uVar12 = local_b0;
      uVar9 = local_b8;
      iVar6 = FUN_140e4a740(&local_1a8);
      plVar7 = (longlong *)0x0;
      if (((local_184 & 0xffffff) == 2) && (local_190 != 0)) {
        if ((iVar6 < 0) || (*(int *)(local_190 + 0x24) <= iVar6)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                        *(undefined4 *)(local_190 + 0x24));
        }
        else {
          plVar7 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(local_190 + 8));
        }
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar7 = &local_190;
      }
      uVar5 = 1 << ((byte)uVar3 & 0x1f) & 0x46;
      uStack_90 = uVar12;
      uStack_8c = uVar3;
      if (uVar5 == 0) {
        local_98 = uVar9;
      }
      else {
        FUN_1400419b0(&local_98,&local_b8);
      }
      local_198 = 1;
      FUN_1400460e0(&local_98,plVar7);
      uStack_1b0 = CONCAT44(uStack_8c,uStack_90);
      local_1b8 = local_98;
      if ((1 << ((byte)_local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      FUN_140041b80(&local_170,&local_1b8);
      local_198 = 0;
      if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      if (uVar5 != 0) {
        FUN_140041a50(&local_b8);
      }
      local_128 = &local_170;
      local_1b8 = _DAT_1419df7a0;
      uStack_1b0 = uRam00000001419df7a8;
      if ((1 << ((byte)_local_154 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_160);
      }
      FUN_140041b80(local_160,&local_1b8);
      local_120 = local_160;
      puVar8 = (undefined8 *)gml_Script____struct___106(param_1,param_2,&local_1c8,2,&local_128);
      if (puVar8 != &local_c8) {
        local_1b8 = *puVar8;
        uStack_1b0 = puVar8[1];
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_1b8);
      }
      local_130 = 0x2e;
      cVar4 = FUN_140e491e0(&local_c8);
      if (cVar4 == '\0') {
        local_130 = 0x2e;
        local_68 = 0;
        uStack_5c = 0xd;
        local_1b8 = 0;
        uStack_1b0 = CONCAT44(0xd,uStack_60);
        if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_110);
        }
        FUN_140041b80(&local_110,&local_1b8);
      }
      local_130 = 0x2f;
      cVar4 = FUN_140e491e0(&local_c8);
      if (cVar4 == '\0') {
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        plVar7 = (longlong *)0x0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        local_9c = DAT_141dd4dd4;
        local_a0 = DAT_141dd4dd0;
        if ((1 << ((byte)DAT_141dd4dd4 & 0x1f) & 0x46U) == 0) {
          local_a8 = DAT_141dd4dc8;
        }
        else {
          FUN_1400419b0(&local_a8,&DAT_141dd4dc8);
        }
        uVar3 = local_9c;
        uVar12 = local_a0;
        uVar9 = local_a8;
        iVar6 = FUN_140e4a740(&local_1a8);
        if (((local_184 & 0xffffff) == 2) && (local_190 != 0)) {
          if ((iVar6 < 0) || (*(int *)(local_190 + 0x24) <= iVar6)) {
            FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar6,
                          *(undefined4 *)(local_190 + 0x24));
          }
          else {
            plVar7 = (longlong *)((longlong)iVar6 * 0x10 + *(longlong *)(local_190 + 8));
          }
        }
        else {
          FUN_140e632c0("trying to index variable that is not an array");
          plVar7 = &local_190;
        }
        uVar5 = 1 << ((byte)uVar3 & 0x1f) & 0x46;
        uStack_80 = uVar12;
        uStack_7c = uVar3;
        if (uVar5 == 0) {
          local_88 = uVar9;
        }
        else {
          FUN_1400419b0(&local_88,&local_a8);
        }
        local_198 = 2;
        FUN_1400460e0(&local_88,plVar7);
        uStack_1b0 = CONCAT44(uStack_7c,uStack_80);
        local_1b8 = local_88;
        if ((1 << ((byte)_local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        FUN_140041b80(&local_170,&local_1b8);
        local_198 = 0;
        if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        if (uVar5 != 0) {
          FUN_140041a50(&local_a8);
        }
        local_128 = &local_170;
        local_1b8 = _DAT_1419df7a0;
        uStack_1b0 = uRam00000001419df7a8;
        if ((1 << ((byte)_local_154 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_160);
        }
        FUN_140041b80(local_160,&local_1b8);
        local_120 = local_160;
        uVar9 = gml_Script____struct___106(param_1,param_2,&local_1c8,2,&local_128);
        cVar4 = FUN_140e491e0(uVar9);
        if (cVar4 == '\0') {
          local_130 = 0x2f;
          local_d8 = 0;
          uVar12 = (undefined4)uStack_d0;
          uStack_d0 = CONCAT44(0xd,uVar12);
          local_1b8 = 0;
          uStack_1b0 = CONCAT44(0xd,uVar12);
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          FUN_140041b80(&local_100,&local_1b8);
        }
      }
    }
  } while( true );
}

