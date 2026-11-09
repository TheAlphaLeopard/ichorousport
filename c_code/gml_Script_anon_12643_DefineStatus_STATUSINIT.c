// gml_Script_anon_12643_DefineStatus_STATUSINIT @ 0x1405ce9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_12643_DefineStatus_STATUSINIT
          (longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong **pplVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined4 uVar11;
  ulonglong uVar10;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  byte local_b4;
  undefined1 local_b0 [12];
  byte local_a4;
  undefined1 local_a0 [12];
  byte local_94;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_res18 = 0;
  local_150 = "gml_Script_anon@11840@DefineStatus@STATUSINIT";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 0x216;
  uVar11 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_c0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = (longlong *)0x0;
  local_134 = 0xffffff;
  local_140 = (longlong *)0x0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_ec = 0xffffff;
  local_f8 = (longlong *)0x0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_6c = 0;
  local_78 = 0x4008000000000000;
  local_10c = 0;
  local_118 = 0xc010000000000000;
  local_148 = 0x21b;
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
  if (puVar4 != &local_c0) {
    local_178 = (longlong *)*puVar4;
    uStack_170 = *(undefined4 *)(puVar4 + 1);
    uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)_local_b4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c0);
    }
    FUN_140041b80(&local_c0,&local_178);
  }
  local_d8 = &local_c0;
  ppuVar12 = &local_d8;
  uVar10 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_168,1,uVar10,ppuVar12);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_148 = 0x21d;
    puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5838);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0xc024000000000000;
    local_148 = 0x21e;
  }
  else {
    local_148 = 0x222;
    uStack_16c = 0xf;
    local_178 = (longlong *)0x100000000000091;
    iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_178);
    if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    if (0 < iVar2) {
      do {
        (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
        local_148 = 0x224;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
        uVar6 = (**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f440);
        iVar2 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,0);
        if (iVar2 == 0) {
          local_148 = 0x226;
          uStack_16c = 6;
          local_178 = local_res8;
          ppuVar12 = (undefined8 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(&local_178,DAT_141a0a828,0x80000000,&local_88,uVar10,ppuVar12);
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_128 = local_88;
          uStack_120 = uStack_80;
          uStack_11c = uStack_7c;
          if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_128);
          local_148 = 0x227;
          pplVar7 = (longlong **)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f6058);
          if (pplVar7 != &local_140) {
            local_128 = *pplVar7;
            uStack_120 = *(undefined4 *)(pplVar7 + 1);
            uStack_11c = *(undefined4 *)((longlong)pplVar7 + 0xc);
            if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_140);
            }
            FUN_140041b80(&local_140,&local_128);
          }
        }
        else {
          local_148 = 0x224;
        }
        cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    uVar11 = (undefined4)(uVar10 >> 0x20);
    FUN_140e63970(local_58,&local_res8,&local_res10);
    local_148 = 0x22b;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    local_d8 = &local_118;
    ppuVar12 = &local_d8;
    uVar10 = CONCAT44(uVar11,DAT_141a02ef8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_168,1,uVar10,ppuVar12);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_148 = 0x22d;
      puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5838);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      *puVar4 = 0xc024000000000000;
      local_148 = 0x22e;
    }
    else {
      local_148 = 0x232;
      uVar3 = FUN_140e851f0(&local_140,&local_78,DAT_141955260,1);
      if (uVar3 < 0x80000000) {
        local_148 = 0x234;
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
        uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
        uVar10 = uVar10 & 0xffffffffffffff00;
        FUN_140e87440(uVar5,DAT_141a1f170,0x80000000,&local_e8,uVar10,uVar13);
        FUN_140e87440(&local_118,DAT_1419f5e18,0x80000000,&local_f8,uVar10 & 0xffffffffffffff00,
                      uVar13 & 0xffffffffffffff00);
        uStack_16c = local_ec;
        uStack_170 = local_f0;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) == 0) {
          local_178 = local_f8;
        }
        else {
          FUN_1400419b0(&local_178,&local_f8);
        }
        FUN_1400462a0(&local_e8,&local_178);
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140e87930(uVar5,DAT_141a1f170,0x80000000,&local_e8);
        local_148 = 0x236;
        local_d8 = &local_118;
        FUN_140edd0e0(local_res8,local_res10,1,&local_d8);
        local_148 = 0x237;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5838);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = 0xc024000000000000;
        local_148 = 0x239;
      }
      else {
        local_148 = 0x23d;
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        uVar11 = (undefined4)(uVar10 >> 0x20);
        local_168 = 0;
        local_160 = 0;
        local_15c = 5;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5838);
        uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5fc8);
        puVar8 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5838);
        if (puVar4 != &local_c0) {
          local_178 = (longlong *)*puVar4;
          uStack_170 = *(undefined4 *)(puVar4 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c0);
          }
          FUN_140041b80(&local_c0,&local_178);
        }
        local_d8 = &local_c0;
        uStack_16c = local_134;
        uStack_170 = local_138;
        if ((1 << ((byte)local_134 & 0x1f) & 0x46U) == 0) {
          local_178 = local_140;
        }
        else {
          FUN_1400419b0(&local_178,&local_140);
        }
        local_res18 = 1;
        FUN_140046500(&local_178,&local_78);
        local_fc = 0;
        local_108 = (longlong *)0x3ff0000000000000;
        local_res18 = 3;
        FUN_1400462a0(&local_108,&local_178);
        uStack_11c = local_fc;
        uStack_120 = local_100;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) == 0) {
          local_128 = local_108;
        }
        else {
          FUN_1400419b0(&local_128,&local_108);
        }
        local_res18 = 7;
        FUN_140042560(&local_128,uVar5);
        local_68 = (undefined4)local_128;
        uStack_64 = local_128._4_4_;
        uStack_60 = uStack_120;
        uStack_5c = uStack_11c;
        if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b0);
        }
        FUN_140041b80(local_b0,&local_68);
        local_res18 = 3;
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_res18 = 1;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_d0 = local_b0;
        local_68 = _DAT_1419e6930;
        uStack_64 = uRam00000001419e6934;
        uStack_60 = uRam00000001419e6938;
        uStack_5c = uRam00000001419e693c;
        if ((1 << (local_94 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a0);
        }
        FUN_140041b80(local_a0,&local_68);
        local_c8 = local_a0;
        FUN_140e609c0(local_res8);
        puVar9 = (undefined4 *)
                 FUN_140e634e0(local_res8,local_res10,&local_168,3,CONCAT44(uVar11,DAT_141a00c58),
                               &local_d8);
        if (puVar9 != puVar8) {
          local_68 = *puVar9;
          uStack_64 = puVar9[1];
          uStack_60 = puVar9[2];
          uStack_5c = puVar9[3];
          if ((1 << ((byte)puVar8[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          FUN_140041b80(puVar8,&local_68);
        }
        FUN_140e60910(1);
      }
    }
    if (local_48 != 0) {
      FUN_140e4cd60();
      local_48 = 0;
    }
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(&local_c0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

