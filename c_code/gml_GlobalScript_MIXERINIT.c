// gml_GlobalScript_MIXERINIT @ 0x1403b4e50

undefined8 *
gml_GlobalScript_MIXERINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108 [2];
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  
  local_d0 = "gml_Script_light_flash_create";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x1de;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_15c = 0xffffff;
  local_168 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5168);
  local_50 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f5458);
  local_8c = 0;
  local_98 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_16c = 0;
  local_178 = 0;
  local_9c = 0;
  local_a8 = (double)param_4;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x1df;
  puVar4 = (undefined8 *)FUN_140e8da20(&local_98,param_1,0);
  if (puVar4 != &local_168) {
    local_188 = *puVar4;
    uStack_180 = puVar4[1];
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_188);
  }
  local_c8 = 0x1e0;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_18c = 0;
  local_198 = 0x4008000000000000;
  bVar1 = true;
  puVar4 = &DAT_1419df7b0;
  while( true ) {
    uVar8 = (undefined4)((ulonglong)pcVar6 >> 0x20);
    if (!bVar1) {
      local_c8 = 0x1e0;
      FUN_140162d40(&local_198,2);
    }
    bVar1 = false;
    iVar2 = FUN_140e851f0(&local_198,&local_a8,DAT_141955260,1);
    if ((iVar2 == -2) || (-1 < iVar2)) break;
    local_c8 = 0x1e1;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = 0;
    local_1b0 = 0;
    local_1ac = 5;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_b8,gml_Script_light_flash_create,0);
    if (&local_b8 != puVar3) {
      uStack_1c0 = CONCAT44(uStack_ac,uStack_b0);
      local_1c8 = local_b8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_1c8);
    }
    FUN_140e60910(1);
    if (puVar3 != &local_148) {
      local_1c8 = *puVar3;
      uStack_1c0 = puVar3[1];
      if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_1c8);
    }
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_88 = &local_148;
    iVar2 = FUN_140e4a740(&local_198);
    if (iVar2 < param_4) {
      puVar5 = (undefined8 *)param_5[iVar2];
      if (puVar5 != &local_138) goto LAB_1403b5181;
    }
    else {
      puVar5 = &DAT_1419df7b0;
LAB_1403b5181:
      local_1c8 = *puVar5;
      uStack_1c0 = puVar5[1];
      if ((1 << ((byte)_local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      FUN_140041b80(&local_138,&local_1c8);
    }
    local_80 = &local_138;
    local_14c = local_18c;
    local_150 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_158 = local_198;
    }
    else {
      FUN_1400419b0(&local_158,&local_198);
    }
    uStack_180 = CONCAT44(7,(undefined4)uStack_180);
    local_188 = CONCAT44(local_188._4_4_,1);
    FUN_1400460e0(&local_158,&local_188);
    if ((1 << ((byte)((ulonglong)uStack_180 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    iVar2 = FUN_140e4a740(&local_158);
    if (iVar2 < param_4) {
      puVar5 = (undefined8 *)param_5[iVar2];
      if (puVar5 != &local_128) goto LAB_1403b5248;
    }
    else {
      puVar5 = &DAT_1419df7b0;
LAB_1403b5248:
      local_1c8 = *puVar5;
      uStack_1c0 = puVar5[1];
      if ((1 << ((byte)_local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_1c8);
    }
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_78 = &local_128;
    local_70 = &local_168;
    uVar7 = CONCAT44(uVar8,DAT_1419fd6d8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,3,uVar7,&local_88);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (puVar5 != local_108) {
      local_1c8 = *puVar5;
      uStack_1c0 = puVar5[1];
      if ((1 << ((byte)local_108[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_1c8);
    }
    local_68 = local_108;
    pcVar6 = (code *)CONCAT44(uVar8,DAT_1419fe568);
    FUN_140e634e0(param_1,param_2,&local_1a8,2,pcVar6,&local_70);
  }
  local_c8 = 0x1e3;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  local_1a8 = 0;
  local_1a0 = 0;
  local_19c = 5;
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  local_1b8 = 0;
  local_1b0 = 0;
  local_1ac = 5;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_188,gml_Script_light_flash_process,0);
  puVar3 = local_50;
  if (&local_188 != local_50) {
    local_1c8 = local_188;
    uStack_1c0 = uStack_180;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_50 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(puVar3,&local_1c8);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_148) {
    local_1c8 = *puVar3;
    uStack_1c0 = puVar3[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1c8);
  }
  if ((1 << ((byte)((ulonglong)uStack_180 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_88 = &local_148;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_1403b54b0:
    local_1c8 = *puVar3;
    uStack_1c0 = puVar3[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1c8);
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 != &local_138) goto LAB_1403b54b0;
  }
  local_80 = &local_138;
  if (param_4 < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)param_5[1];
    if (puVar3 == &local_128) goto LAB_1403b552a;
  }
  local_1c8 = *puVar3;
  uStack_1c0 = puVar3[1];
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140041b80(&local_128,&local_1c8);
LAB_1403b552a:
  local_78 = &local_128;
  if ((param_4 < 3) || (puVar4 = (undefined8 *)param_5[2], puVar4 != &local_118)) {
    local_1c8 = *puVar4;
    uStack_1c0 = puVar4[1];
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1c8);
  }
  local_70 = &local_118;
  local_68 = &local_168;
  uVar8 = 0;
  puVar3 = (undefined8 *)
           gml_Script____struct___140_light_flash_create_lighting_system
                     (param_1,param_2,&local_1b8,0,0);
  if (puVar3 != &local_f8) {
    local_1c8 = *puVar3;
    uStack_1c0 = puVar3[1];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1c8);
  }
  uVar7 = CONCAT44(uVar8,DAT_1419fd6d8);
  local_60 = &local_f8;
  puVar3 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,5,uVar7,&local_88);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (puVar3 != &local_e8) {
    local_1c8 = *puVar3;
    uStack_1c0 = puVar3[1];
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1c8);
  }
  local_58 = &local_e8;
  FUN_140e634e0(param_1,param_2,&local_1a8,2,CONCAT44(uVar8,DAT_1419fe568),&local_60);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

