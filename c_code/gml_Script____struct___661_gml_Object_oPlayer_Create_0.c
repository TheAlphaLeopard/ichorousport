// gml_Script____struct___661_gml_Object_oPlayer_Create_0 @ 0x140c17030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___661_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 **ppuVar15;
  ulonglong uVar16;
  undefined8 **ppuVar17;
  ulonglong uVar18;
  undefined1 **ppuVar19;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_164;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  local_1b0 = "gml_Script_anon@28807@___struct___661@gml_Object_oPlayer_Create_0";
  local_1b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1b8;
  local_1a8 = 0x5f7;
  _eh_vector_constructor_iterator_(&local_118,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_188 = 0xffffff;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_164 = 0xffffff;
  local_170 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_1bc = 0;
  local_1c8 = 0;
  local_174 = 0;
  local_180 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1a8 = 0x5f9;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
  uStack_1cc = 0;
  local_1d8 = (longlong *)0x0;
  iVar4 = FUN_140e851f0(uVar7,&local_1d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if (iVar4 != 0) {
    local_1a8 = 0x5fa;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if (puVar8 != &local_c8) {
      local_1d8 = (longlong *)*puVar8;
      uStack_1d0 = *(undefined4 *)(puVar8 + 1);
      uStack_1cc = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_1d8);
    }
    FUN_140e87930(uVar7,DAT_1419f80a8,0x80000000,&local_c8);
  }
  local_1a8 = 0x5fc;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8778);
  uVar7 = FUN_140e63610(param_1,param_2,&local_1c8,0,uVar7,0);
  cVar3 = FUN_140e491e0(uVar7);
  uVar13 = 0xffffff;
  if (cVar3 != '\0') {
    local_1a8 = 0x5fd;
    goto LAB_140c182fd;
  }
  local_1a8 = 0x5ff;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8828);
  uVar16 = 0;
  uVar7 = FUN_140e63610(param_1,param_2,&local_1c8,0,uVar9,0);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 != '\0') {
    local_1a8 = 0x600;
    goto LAB_140c182fd;
  }
  local_1a8 = 0x602;
  puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  if (puVar8 != &local_a8) {
    local_1d8 = (longlong *)*puVar8;
    uStack_1d0 = *(undefined4 *)(puVar8 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar8 + 0xc);
    FUN_140041b80(&local_a8,&local_1d8);
    local_188 = uStack_9c;
  }
  local_1a8 = 0x603;
  uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  puVar10 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
  FUN_140e87440(uVar7,DAT_1419f80a8,0x80000000,&local_98,uVar9 & 0xffffffffffffff00,
                uVar16 & 0xffffffffffffff00);
  FUN_140e609c0(param_1);
  if (&local_98 != puVar10) {
    local_1d8 = (longlong *)local_98;
    uStack_1d0 = uStack_90;
    uStack_1cc = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar10);
    }
    FUN_140041b80(puVar10,&local_1d8);
  }
  FUN_140e60910(1);
  local_1a8 = 0x605;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_141a096c8);
  uVar16 = 0;
  uVar7 = FUN_140e63610(param_1,param_2,&local_1c8,0,uVar9,0);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 == '\0') {
    local_1a8 = 0x60b;
    FUN_140e609c0(param_1);
    if (&local_a8 != puVar10) {
      local_1d8 = (longlong *)local_a8;
      uStack_1d0 = uStack_a0;
      uStack_1cc = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar10);
      }
      FUN_140041b80(puVar10,&local_1d8);
    }
    FUN_140e60910(1);
    local_1a8 = 0x60d;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar9 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff968);
    local_1d8 = (longlong *)CONCAT44(uRam00000001419ecce4,_DAT_1419ecce0);
    uStack_1d0 = uRam00000001419ecce8;
    uStack_1cc = uRam00000001419eccec;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1d8);
    local_138 = &local_118;
    ppuVar17 = &local_138;
    uVar7 = FUN_140e63610(param_1,param_2,&local_1c8,1,uVar9,ppuVar17);
    cVar3 = FUN_140e491e0(uVar7);
    local_130 = local_108;
    if (cVar3 != '\0') {
      uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
      (**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5ef8);
      uStack_1cc = 0;
      local_1d8 = (longlong *)0x0;
      uVar5 = FUN_140e851f0(uVar7,&local_1d8,DAT_141955260,1);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if (uVar5 < 0x80000000) {
        local_1a8 = 0x60f;
        if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        local_180 = 0;
        local_178 = 0;
        local_174 = 5;
        uVar16 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8458);
        uStack_1cc = 6;
        uVar18 = (ulonglong)ppuVar17 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_1419fe0e8,0x80000000,&local_68,uVar9,uVar18);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        uStack_1cc = 6;
        local_1d8 = param_1;
        FUN_140e87440(&local_1d8,DAT_141a101f8,0x80000000,&local_d8,uVar9 & 0xffffffffffffff00,
                      uVar18 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = (longlong *)local_68;
        uStack_1d0 = uStack_60;
        uStack_1cc = uStack_5c;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_108);
        }
        FUN_140041b80(local_108,&local_1d8);
        uStack_18c = local_cc;
        uStack_190 = local_d0;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
          local_198 = local_d8;
        }
        else {
          FUN_1400419b0(&local_198,&local_d8);
        }
        uStack_1cc = 7;
        bVar2 = false;
        bVar1 = true;
        local_1d8 = (longlong *)CONCAT44(local_1d8._4_4_,2);
        FUN_1400460e0(&local_198,&local_1d8);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = (longlong *)local_198;
        uStack_1d0 = uStack_190;
        uStack_1cc = uStack_18c;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_1d8);
        if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_128 = local_f8;
        local_1d8 = (longlong *)CONCAT44(uRam0000000141dda77c,_DAT_141dda778);
        uStack_1d0 = uRam0000000141dda780;
        uStack_1cc = DAT_141dda784;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_1d8);
        local_120 = local_e8;
        ppuVar19 = &local_130;
        FUN_140e63610(param_1,param_2,&local_180,3,uVar16,ppuVar19);
        local_1a8 = 0x611;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_141a066f8);
        uStack_1cc = 0;
        local_1d8 = (longlong *)0x0;
        iVar4 = FUN_140e851f0(uVar7,&local_1d8,DAT_141955260,0);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (iVar4 == 0) {
          uStack_1cc = DAT_141dda824;
          uStack_1d0 = DAT_141dda820;
          if ((1 << ((byte)DAT_141dda824 & 0x1f) & 0x46U) == 0) {
            local_1d8 = (longlong *)DAT_141dda818;
          }
          else {
            FUN_1400419b0(&local_1d8,&DAT_141dda818);
          }
          puVar6 = &local_1d8;
          bVar2 = true;
          bVar1 = false;
        }
        else {
          uStack_18c = DAT_141dda554;
          uStack_190 = DAT_141dda550;
          if ((1 << ((byte)DAT_141dda554 & 0x1f) & 0x46U) == 0) {
            local_198 = DAT_141dda548;
          }
          else {
            FUN_1400419b0(&local_198,&DAT_141dda548);
          }
          puVar6 = &local_198;
        }
        local_158 = *(undefined4 *)puVar6;
        uStack_154 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_150 = *(undefined4 *)(puVar6 + 1);
        uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_158);
        if ((bVar1) && ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_198);
        }
        if ((bVar2) && ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_1d8);
        }
        local_1a8 = 0x612;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
        FUN_140e87440(uVar7,DAT_141a55540,0x80000000,&local_b8,uVar16 & 0xffffffffffffff00,
                      (ulonglong)ppuVar19 & 0xffffffffffffff00);
        local_138 = &local_148;
        uVar7 = FUN_140069500(uVar7);
        ppuVar17 = &local_138;
        puVar6 = &local_b8;
        FUN_140e63610(uVar7,param_2,&local_1c8,1,puVar6,ppuVar17);
        local_1a8 = 0x613;
        uStack_1cc = DAT_141dda554;
        uStack_1d0 = DAT_141dda550;
        if ((1 << ((byte)DAT_141dda554 & 0x1f) & 0x46U) == 0) {
          local_1d8 = (longlong *)DAT_141dda548;
        }
        else {
          FUN_1400419b0(&local_1d8,&DAT_141dda548);
        }
        iVar4 = FUN_140e851f0(&local_148,&local_1d8,DAT_141955260,0);
        if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        if (iVar4 == 0) {
          local_1a8 = 0x614;
          if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
          local_1c8 = 0;
          local_1c0 = 0;
          local_1bc = 5;
          uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
          FUN_140e87440(uVar7,DAT_1419f7b28,0x80000000,&local_78,
                        (ulonglong)puVar6 & 0xffffffffffffff00,
                        (ulonglong)ppuVar17 & 0xffffffffffffff00);
          local_138 = &local_148;
          uVar7 = FUN_140069500(uVar7);
          FUN_140e63610(uVar7,param_2,&local_1c8,1,&local_78,&local_138);
        }
        local_1a8 = 0x617;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        uStack_1cc = 0xf;
        local_1d8 = (longlong *)0x100000000000149;
        local_158 = 0x149;
        uStack_154 = 0x1000000;
        uStack_150 = uStack_1d0;
        uStack_14c = 0xf;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_158);
        local_138 = &local_118;
        gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_1c8,1,&local_138);
        local_1a8 = 0x618;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        uStack_1cc = 0xf;
        local_1d8 = (longlong *)0x1000000000000ea;
        local_158 = 0xea;
        uStack_154 = 0x1000000;
        uStack_150 = uStack_1d0;
        uStack_14c = 0xf;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_158);
        local_138 = &local_118;
        gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_1c8,1,&local_138);
        local_1a8 = 0x61a;
        goto LAB_140c182f9;
      }
    }
    local_1a8 = 0x61e;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_158 = (undefined4)DAT_1419df7b0;
    uStack_154 = DAT_1419df7b0._4_4_;
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_158);
    local_138 = &local_118;
    local_158 = (undefined4)DAT_1419df7b0;
    uStack_154 = DAT_1419df7b0._4_4_;
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_158);
    ppuVar15 = &local_138;
    uVar7 = gml_Script_animcurve_lerp(param_1,param_2,&local_1c8,2,ppuVar15);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_1a8 = 0x620;
      if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_170);
      }
      local_164 = 0;
      local_170 = 0;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_170);
    }
    local_1a8 = 0x624;
    uStack_1cc = 6;
    local_1d8 = param_1;
    FUN_140e87440(&local_1d8,DAT_141a0a818,0x80000000,&local_88,
                  (ulonglong)ppuVar15 & 0xffffffffffffff00,(ulonglong)ppuVar17 & 0xffffffffffffff00)
    ;
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    uStack_1cc = 0;
    local_1d8 = (longlong *)0x0;
    iVar4 = FUN_140e851f0(&local_88,&local_1d8,DAT_141955260,0);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (iVar4 != 0) {
      local_1a8 = 0x625;
      if (puVar6 != &local_170) {
        local_158 = *(undefined4 *)puVar6;
        uStack_154 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_150 = *(undefined4 *)(puVar6 + 1);
        uStack_14c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_170);
        }
        FUN_140041b80(&local_170,&local_158);
      }
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_170);
    }
    local_1a8 = 0x627;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8198);
    FUN_140e63610(param_1,param_2,&local_1c8,0,uVar7,0);
    local_1a8 = 0x629;
    puVar10 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
    uStack_18c = *(undefined4 *)((longlong)puVar10 + 0xc);
    uStack_190 = *(undefined4 *)(puVar10 + 1);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) == 0) {
      local_198 = *puVar10;
    }
    else {
      FUN_1400419b0(&local_198,puVar10);
    }
    FUN_140042560(&local_198,puVar6);
    FUN_1400460e0(puVar11,&local_198);
    if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_1a8 = 0x62a;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    puVar12 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419ef898);
    uVar5 = *(uint *)((longlong)puVar12 + 0xc);
    if ((uVar5 & 0xffffff) == 0) {
      uVar9 = *puVar12;
    }
    else {
      uVar9 = FUN_140e4b060(puVar12);
      uVar5 = *(uint *)((longlong)puVar12 + 0xc);
    }
    uVar13 = (undefined4)uVar9;
    uStack_1cc = 0;
    local_1d8 = (longlong *)(uVar9 ^ 0x8000000000000000);
    if ((uVar5 & 0xffffff) == 0) {
      uVar9 = *puVar12;
    }
    else {
      uVar9 = FUN_140e4b060(puVar12);
      uVar13 = SUB84(local_1d8,0);
    }
    if ((uStack_1cc & 0xffffff) != 0) {
      uVar13 = FUN_140e4b060(&local_1d8);
    }
    if ((*(uint *)((longlong)puVar6 + 0xc) & 0xffffff) == 0) {
      uVar14 = (undefined4)*puVar6;
    }
    else {
      uVar14 = FUN_140e4b060(puVar6);
    }
    uVar7 = FUN_140e78ec0(uVar14,uVar13,uVar9);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar11 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar11);
    }
    *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
    *puVar11 = uVar7;
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1a8 = 0x62b;
    uVar7 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
    uStack_1cc = 0;
    local_1d8 = (longlong *)0xc02e000000000000;
    FUN_140042560(&local_1d8,puVar8);
    FUN_1400460e0(uVar7,&local_1d8);
    if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1a8 = 0x62d;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_1c8,0,uVar7,0);
    local_1a8 = 0x62e;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    FUN_140e63610(param_1,param_2,&local_1c8,0,uVar7,0);
    local_1a8 = 0x62f;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f8098);
    FUN_140e63610(param_1,param_2,&local_1c8,0,uVar7,0);
  }
  else {
    local_1a8 = 0x607;
    if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    local_180 = 0;
    local_178 = 0;
    local_174 = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar7,DAT_141a55540,0x80000000,&local_b8,uVar9 & 0xffffffffffffff00,
                  uVar16 & 0xffffffffffffff00);
    local_1d8 = (longlong *)CONCAT44(DAT_141dda668._4_4_,(undefined4)DAT_141dda668);
    uStack_1d0 = DAT_141dda670;
    uStack_1cc = DAT_141dda674;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1d8);
    local_138 = &local_118;
    uVar7 = FUN_140069500(uVar7);
    FUN_140e63610(uVar7,param_2,&local_180,1,&local_b8,&local_138);
    local_1a8 = 0x608;
  }
LAB_140c182f9:
  uVar13 = local_188;
LAB_140c182fd:
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_170);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uVar13 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1b8;
  return param_3;
}

