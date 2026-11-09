// gml_Script_anon_19149_DefineTrinkets_TRINKETSINIT @ 0x1405f8440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_19149_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 **ppuVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined4 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60 [3];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined4 *local_40;
  undefined1 *local_38 [2];
  
  local_70 = "gml_Script_anon@18854@DefineTrinkets@TRINKETSINIT";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x2f2;
  _eh_vector_constructor_iterator_(local_60,0x10,2,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a572b0);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x2f4;
  local_c8 = _DAT_1419e6ac0;
  uStack_c4 = uRam00000001419e6ac4;
  uStack_c0 = uRam00000001419e6ac8;
  uStack_bc = uRam00000001419e6acc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_c8);
  local_38[0] = local_50;
  ppuVar5 = local_38;
  uVar3 = gml_Script_choose_weighted(param_1,param_2,&local_d8,1,ppuVar5);
  uVar7 = (undefined4)((ulonglong)ppuVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_68 = 0x2f4;
  }
  else {
    local_68 = 0x2f6;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (puVar2 != local_60) {
      local_c8 = *puVar2;
      uStack_c4 = puVar2[1];
      uStack_c0 = puVar2[2];
      uStack_bc = puVar2[3];
      if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_60);
      }
      FUN_140041b80(local_60,&local_c8);
    }
    local_40 = local_60;
    ppuVar8 = &local_40;
    uVar6 = CONCAT44(uVar7,DAT_1419f5e98);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_d8,1,uVar6,ppuVar8);
    uStack_ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_b0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) == 0) {
      local_b8 = *puVar4;
    }
    else {
      FUN_1400419b0(&local_b8,puVar4);
    }
    uStack_bc = 7;
    local_c8 = 2;
    FUN_140042560(&local_b8,&local_c8);
    if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = (undefined4)local_b8;
    uStack_c4 = local_b8._4_4_;
    uStack_c0 = uStack_b0;
    uStack_bc = uStack_ac;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_c8);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_68 = 0x2f8;
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    uVar9 = (ulonglong)ppuVar8 & 0xffffffffffffff00;
    uVar6 = uVar6 & 0xffffffffffffff00;
    FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_88,uVar6,uVar9);
    FUN_140e87440(&local_88,DAT_1419f62b8,0x80000000,&local_98,uVar6 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    FUN_1400460e0(&local_98,&local_a8);
    FUN_140e87930(&local_88,DAT_1419f62b8,0x80000000,&local_98);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

