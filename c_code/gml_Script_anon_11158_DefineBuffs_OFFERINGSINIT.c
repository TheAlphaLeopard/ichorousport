// gml_Script_anon_11158_DefineBuffs_OFFERINGSINIT @ 0x1403cc570

undefined8 *
gml_Script_anon_11158_DefineBuffs_OFFERINGSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar8;
  undefined4 uVar11;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 **ppuVar12;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108 [2];
  undefined8 local_f8;
  byte local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8 [2];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 local_60 [16];
  longlong local_50;
  
  local_120 = "gml_Script_anon@10709@DefineBuffs@OFFERINGSINIT";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x19c;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_108,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_13c = 0xffffff;
  local_148 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5bf8);
  local_15c = 0;
  local_168 = 0;
  local_14c = 0;
  local_158 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x19e;
  if (param_4 < 2) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)param_5[1];
  }
  uVar6 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_148,uVar6,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  uVar11 = (undefined4)(uVar6 >> 0x20);
  local_178 = local_148;
  uStack_170 = uStack_140;
  uStack_16c = uStack_13c;
  if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_178);
  local_78 = local_e8;
  ppuVar13 = &local_78;
  uVar6 = CONCAT44(uVar11,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_168,1,uVar6,ppuVar13);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_118 = 0x19e;
  }
  else {
    local_118 = 0x19f;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    local_168 = 0;
    local_160 = 0;
    local_15c = 5;
    if (param_4 < 2) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)param_5[1];
    }
    FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_148,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    plVar9 = local_res8;
    FUN_140e87170(&local_148,DAT_141a1f580,0x80000000,&local_98,local_res8,local_res10);
    uVar11 = (undefined4)((ulonglong)plVar9 >> 0x20);
    local_178 = local_98;
    uStack_170 = uStack_90;
    uStack_16c = uStack_8c;
    if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_88 = local_108;
    uStack_16c = 0xf;
    local_178 = 0x10000000000009d;
    local_188 = 0x10000000000009d;
    uStack_180 = uStack_170;
    uStack_17c = 0xf;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_188);
    local_80 = &local_f8;
    ppuVar12 = &local_88;
    uVar6 = CONCAT44(uVar11,DAT_1419f60e8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_168,2,uVar6,ppuVar12);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_118 = 0x19f;
    }
    else {
      local_118 = 0x1a1;
      if (param_4 < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*param_5;
      }
      uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_180 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
        local_188 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_188);
      }
      uStack_16c = 7;
      local_178 = CONCAT44(local_178._4_4_,4);
      FUN_140042560(&local_188,&local_178);
      if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = local_188;
      uStack_170 = uStack_180;
      uStack_16c = uStack_17c;
      if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_178);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      local_118 = 0x1a2;
      if (param_4 < 2) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)param_5[1];
      }
      ppuVar13 = (undefined1 **)((ulonglong)ppuVar12 & 0xffffffffffffff00);
      uVar6 = uVar6 & 0xffffffffffffff00;
      FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_148,uVar6,ppuVar13);
      iVar2 = FUN_140e63cb0(local_60,&local_res8,&local_res10,&local_148);
      if (0 < iVar2) {
        do {
          local_118 = 0x1a3;
          uVar10 = uVar6;
          if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
            uVar10 = uVar6;
          }
          local_168 = 0;
          local_160 = 0;
          local_15c = 5;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_158 = 0;
          local_150 = 0;
          local_14c = 5;
          uVar6 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1edd0);
          uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(uVar3,DAT_1419f59a8,0x80000000,&local_a8,uVar10,uVar14);
          if (param_4 < 2) {
            puVar7 = &DAT_1419df7b0;
          }
          else {
            puVar7 = (undefined8 *)param_5[1];
          }
          uVar10 = uVar10 & 0xffffffffffffff00;
          FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_b8,uVar10,uVar14 & 0xffffffffffffff00
                       );
          uVar11 = (undefined4)(uVar10 >> 0x20);
          FUN_140e609c0(DAT_141a729d8);
          FUN_140e645a0(&local_178,gml_Script_anon_11009_DefineBuffs_OFFERINGSINIT,0);
          if (&local_178 != puVar4) {
            local_188 = local_178;
            uStack_180 = uStack_170;
            uStack_17c = uStack_16c;
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar4);
            }
            FUN_140041b80(puVar4,&local_188);
          }
          FUN_140e60910(1);
          if (puVar4 != local_108) {
            local_188 = *puVar4;
            uStack_180 = *(undefined4 *)(puVar4 + 1);
            uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
            if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_108);
            }
            FUN_140041b80(local_108,&local_188);
          }
          if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_88 = local_108;
          local_80 = &local_138;
          local_188 = local_a8;
          uStack_180 = uStack_a0;
          uStack_17c = uStack_9c;
          if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_188);
          local_78 = local_e8;
          local_188 = local_b8;
          uStack_180 = uStack_b0;
          uStack_17c = uStack_ac;
          if ((1 << (local_d8[0xc] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_188);
          local_70 = local_d8;
          puVar7 = (undefined8 *)
                   FUN_140e634e0(local_res8,local_res10,&local_158,2,CONCAT44(uVar11,DAT_1419fd6d8),
                                 &local_88);
          if (puVar7 != local_c8) {
            local_188 = *puVar7;
            uStack_180 = *(undefined4 *)(puVar7 + 1);
            uStack_17c = *(undefined4 *)((longlong)puVar7 + 0xc);
            if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_c8);
            }
            FUN_140041b80(local_c8,&local_188);
          }
          local_68 = local_c8;
          ppuVar13 = &local_78;
          FUN_140e63610(local_res8,local_res10,&local_168,3,uVar6,ppuVar13);
          cVar1 = FUN_140e643f0(local_60,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_60,&local_res8,&local_res10);
      if (local_50 != 0) {
        FUN_140e4cd60();
        local_50 = 0;
      }
    }
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  _eh_vector_destructor_iterator_(local_108,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

