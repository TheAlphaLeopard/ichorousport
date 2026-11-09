// gml_Script____struct___529_gml_Object_oEnemySkele_Create_0 @ 0x140a6a270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___529_gml_Object_oEnemySkele_Create_0
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined1 **ppuVar11;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  byte local_174;
  undefined1 local_170 [12];
  byte local_164;
  undefined1 local_160 [12];
  byte local_154;
  undefined8 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 local_6c;
  undefined1 local_68 [16];
  longlong local_58;
  
  local_res18 = 0;
  local_1a0 = "gml_Script_anon@5475@___struct___529@gml_Object_oEnemySkele_Create_0";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0xe8;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_180,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_7c = 0xffffff;
  local_88 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_1dc = 0;
  local_1e8 = 0;
  local_12c = 0;
  local_138 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0xea;
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f310);
  uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
  local_1cc = *(undefined4 *)((longlong)puVar5 + 0xc);
  local_1d0 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
    local_1d8 = (longlong *)*puVar5;
  }
  else {
    FUN_1400419b0(&local_1d8,puVar5);
  }
  local_res18 = 1;
  FUN_140042560(&local_1d8,puVar4);
  FUN_1400460e0(uVar6,&local_1d8);
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  local_198 = 0xec;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419ff968);
  local_190 = (longlong *)CONCAT44(uRam00000001419eafe4,_DAT_1419eafe0);
  uStack_188 = uRam00000001419eafe8;
  uStack_184 = uRam00000001419eafec;
  if ((1 << ((byte)_local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  FUN_140041b80(&local_180,&local_190);
  local_150 = &local_180;
  ppuVar9 = &local_150;
  uVar6 = FUN_140e63610(local_res8,local_res10,&local_1e8,1,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 != '\0') {
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f500);
    local_1cc = 0;
    local_1d8 = (longlong *)0x0;
    uVar2 = FUN_140e851f0(uVar6,&local_1d8,DAT_141955260,1);
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if (uVar2 < 0x80000000) {
      local_198 = 0xee;
      local_1cc = 6;
      local_1d8 = local_res8;
      ppuVar9 = (undefined8 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
      FUN_140e87440(&local_1d8,DAT_141a0cfc8,0x80000000,&local_88,uVar7 & 0xffffffffffffff00,ppuVar9
                   );
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_1d8 = (longlong *)0x3ff0000000000000;
      uVar2 = FUN_140e851f0(&local_88,&local_1d8,DAT_141955260,1);
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      if (uVar2 < 0x80000000) {
        local_198 = 0xef;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        *puVar5 = 0;
      }
      local_198 = 0xf0;
      if (puVar4 != &local_1b8) {
        local_190 = (longlong *)*puVar4;
        uStack_188 = *(undefined4 *)(puVar4 + 1);
        uStack_184 = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        FUN_140041b80(&local_1b8,&local_190);
      }
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1b8);
    }
  }
  local_198 = 0xf4;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f230);
  puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
  if (puVar4 != &local_180) {
    local_190 = (longlong *)*puVar4;
    uStack_188 = *(undefined4 *)(puVar4 + 1);
    uStack_184 = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)_local_174 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_180);
    }
    FUN_140041b80(&local_180,&local_190);
  }
  local_150 = &local_180;
  local_190 = (longlong *)CONCAT44(uRam0000000141dc6fa4,_DAT_141dc6fa0);
  uStack_188 = uRam0000000141dc6fa8;
  uStack_184 = uRam0000000141dc6fac;
  if ((1 << ((byte)_local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_170);
  }
  FUN_140041b80(local_170,&local_190);
  local_148 = local_170;
  local_190 = (longlong *)CONCAT44(uRam00000001419eaf84,_DAT_1419eaf80);
  uStack_188 = uRam00000001419eaf88;
  uStack_184 = uRam00000001419eaf8c;
  if ((1 << ((byte)_local_154 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_160);
  }
  FUN_140041b80(local_160,&local_190);
  local_140 = local_160;
  FUN_140e609c0(local_res8);
  ppuVar8 = &local_150;
  puVar4 = (undefined8 *)gml_Script_arc(local_res8,local_res10,&local_1e8,3,ppuVar8);
  if (puVar4 != puVar5) {
    local_190 = (longlong *)*puVar4;
    uStack_188 = *(undefined4 *)(puVar4 + 1);
    uStack_184 = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_190);
  }
  FUN_140e60910(1);
  local_198 = 0xf6;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57250);
  ppuVar9 = (undefined8 **)((ulonglong)ppuVar9 & 0xffffffffffffff00);
  uVar7 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_1419f6278,0x80000000,&local_e8,uVar7,ppuVar9);
  iVar3 = FUN_140e63cb0(local_68,&local_res8,&local_res10,&local_e8);
  if (0 < iVar3) {
    do {
      local_198 = 0xf8;
      local_1cc = 6;
      local_1d8 = local_res10;
      uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_1d8,DAT_141a0cfc8,0x80000000,&local_98,uVar7,uVar10);
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1c8 = (undefined4)local_98;
      uStack_1c4 = local_98._4_4_;
      uStack_1c0 = uStack_90;
      uStack_1bc = uStack_8c;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_1c8);
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_f8);
      local_198 = 0xf9;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1ac = 0;
      local_1b8 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1b8);
      local_198 = 0xfa;
      puVar4 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_1419f5ef8);
      if (puVar4 != &local_128) {
        local_1c8 = *(undefined4 *)puVar4;
        uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_1c0 = *(undefined4 *)(puVar4 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_1c8);
      }
      FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_128);
      local_198 = 0xfb;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1ac = 0;
      local_1b8 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1b8);
      local_198 = 0xfd;
      local_6c = 6;
      local_78 = local_res10;
      uVar10 = uVar10 & 0xffffffffffffff00;
      uVar7 = uVar7 & 0xffffffffffffff00;
      FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_a8,uVar7,uVar10);
      if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      local_1c8 = (undefined4)local_a8;
      uStack_1c4 = local_a8._4_4_;
      uStack_1c0 = uStack_a0;
      uStack_1bc = uStack_9c;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_1c8);
      FUN_140e86fa0(local_res8,DAT_1419fe0e8,0x80000000,&local_108);
      local_198 = 0xfe;
      uStack_184 = 6;
      local_190 = local_res10;
      FUN_140e87440(&local_190,DAT_1419fe158,0x80000000,&local_b8,uVar7 & 0xffffffffffffff00,
                    uVar10 & 0xffffffffffffff00);
      if ((1 << ((byte)uStack_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      local_1c8 = (undefined4)local_b8;
      uStack_1c4 = local_b8._4_4_;
      uStack_1c0 = uStack_b0;
      uStack_1bc = uStack_ac;
      if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_1c8);
      FUN_140e86fa0(local_res8,DAT_1419fe158,0x80000000,&local_118);
      local_198 = 0x100;
      if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      local_1e8 = 0;
      local_1e0 = 0;
      local_1dc = 5;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a01b58);
      puVar4 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7d8);
      if (puVar4 != &local_180) {
        local_1c8 = *(undefined4 *)puVar4;
        uStack_1c4 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_1c0 = *(undefined4 *)(puVar4 + 1);
        uStack_1bc = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)_local_174 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_180);
        }
        FUN_140041b80(&local_180,&local_1c8);
      }
      local_150 = &local_180;
      ppuVar9 = &local_150;
      FUN_140e63610(local_res8,local_res10,&local_1e8,1,uVar7,ppuVar9);
      cVar1 = FUN_140e643f0(local_68,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_68,&local_res8,&local_res10);
  DAT_141a67c38 = 1;
  FUN_140e87440(uVar6,DAT_1419f6278,0x80000000,&local_e8,uVar7 & 0xffffffffffffff00,
                (ulonglong)ppuVar9 & 0xffffffffffffff00);
  DAT_141a67c38 = 0;
  DAT_141a72aac = 0;
  local_198 = 0x104;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f1e38);
  local_1c8 = _DAT_1419eafe0;
  uStack_1c4 = uRam00000001419eafe4;
  uStack_1c0 = uRam00000001419eafe8;
  uStack_1bc = uRam00000001419eafec;
  if ((1 << (local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  FUN_140041b80(&local_180,&local_1c8);
  local_150 = &local_180;
  local_1c8 = _DAT_1419eafe0;
  uStack_1c4 = uRam00000001419eafe4;
  uStack_1c0 = uRam00000001419eafe8;
  uStack_1bc = uRam00000001419eafec;
  if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_170);
  }
  FUN_140041b80(local_170,&local_1c8);
  local_148 = local_170;
  ppuVar9 = &local_150;
  FUN_140e63610(local_res8,local_res10,&local_1e8,2,uVar6,ppuVar9);
  local_198 = 0x106;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 5;
  local_1c8 = (undefined4)DAT_1419df7b0;
  uStack_1c4 = DAT_1419df7b0._4_4_;
  uStack_1c0 = DAT_1419df7b8;
  uStack_1bc = DAT_1419df7bc;
  if ((1 << (local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  FUN_140041b80(&local_180,&local_1c8);
  local_150 = &local_180;
  local_1c8 = (undefined4)DAT_1419df7b0;
  uStack_1c4 = DAT_1419df7b0._4_4_;
  uStack_1c0 = DAT_1419df7b8;
  uStack_1bc = DAT_1419df7bc;
  if ((1 << (local_164 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_170);
  }
  FUN_140041b80(local_170,&local_1c8);
  local_148 = local_170;
  ppuVar8 = &local_150;
  uVar6 = gml_Script_animcurve_lerp(local_res8,local_res10,&local_1e8,2,ppuVar8);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_198 = 0x10f;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd4b8);
    FUN_140e63610(local_res8,local_res10,&local_1e8,0,uVar6,0);
    local_198 = 0x110;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd398);
    FUN_140e63610(local_res8,local_res10,&local_1e8,0,uVar6,0);
    local_198 = 0x111;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd418);
    FUN_140e63610(local_res8,local_res10,&local_1e8,0,uVar6,0);
  }
  else {
    local_198 = 0x108;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5868);
    FUN_140e87440(uVar6,DAT_141a55540,0x80000000,&local_c8,(ulonglong)ppuVar8 & 0xffffffffffffff00,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    local_1c8 = _DAT_141dd8ee8;
    uStack_1c4 = uRam0000000141dd8eec;
    uStack_1c0 = uRam0000000141dd8ef0;
    uStack_1bc = DAT_141dd8ef4;
    if ((1 << (local_154 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_160);
    }
    FUN_140041b80(local_160,&local_1c8);
    local_140 = local_160;
    uVar6 = FUN_140069500(uVar6);
    ppuVar11 = &local_140;
    puVar4 = &local_c8;
    FUN_140e63610(uVar6,local_res10,&local_138,1,puVar4,ppuVar11);
    local_198 = 0x10a;
    if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 5;
    uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f1dd8);
    FUN_140e87440(uVar6,DAT_1419f4a98,0x80000000,&local_d8,(ulonglong)puVar4 & 0xffffffffffffff00,
                  (ulonglong)ppuVar11 & 0xffffffffffffff00);
    uVar6 = FUN_140069500(uVar6);
    FUN_140e63610(uVar6,local_res10,&local_1e8,0,&local_d8,0);
    local_198 = 0x10b;
  }
  if (local_58 != 0) {
    FUN_140e4cd60();
    local_58 = 0;
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_180,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

