// gml_Script_anon_337_InputPlugInGamepadNullifyMapping_InputPlugInGamepadNullifyMapping @ 0x14035a950

undefined8 *
gml_Script_anon_337_InputPlugInGamepadNullifyMapping_InputPlugInGamepadNullifyMapping
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 **ppuVar4;
  undefined4 *puVar5;
  double local_c8;
  uint local_bc;
  undefined8 *local_b8;
  int local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined8 local_60;
  byte local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_InputPlugInGamepadNullifyAllMappings";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 5;
  _eh_vector_constructor_iterator_(local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = (undefined8 *)0x0;
  local_bc = 0xffffff;
  local_c8 = 0.0;
  local_74 = 0;
  local_80 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 7;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
    if (param_5 == &local_60) goto LAB_14035aa55;
  }
  local_a8 = *(undefined4 *)param_5;
  uStack_a4 = *(undefined4 *)((longlong)param_5 + 4);
  uStack_a0 = (undefined8 *)param_5[1];
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  FUN_140041b80(&local_60,&local_a8);
LAB_14035aa55:
  uStack_a0 = &local_60;
  ppuVar4 = (undefined8 **)
            gml_Script___InputGamepadGUIDParse(param_1,param_2,&local_80,1,&uStack_a0);
  if (ppuVar4 != &local_b8) {
    local_a8 = *(undefined4 *)ppuVar4;
    uStack_a4 = *(undefined4 *)((longlong)ppuVar4 + 4);
    uStack_a0 = ppuVar4[1];
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_a8);
  }
  local_88 = 8;
  iVar1 = FUN_140e851f0(&local_b8,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_88 = 8;
  }
  else {
    local_88 = 10;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_bc = 0;
    local_c8 = 0.0;
    local_88 = 0xb;
    iVar1 = 0;
    if ((local_ac == 2) && (local_b8 != (undefined8 *)0x0)) {
      iVar1 = *(int *)((longlong)local_b8 + 0x24);
    }
    while (0 < iVar1) {
      iVar1 = iVar1 + -1;
      local_88 = 0xd;
      FUN_140e645a0(&local_a8,gml_GlobalScript_InputPlugInGamepadNullifyMapping,param_1);
      uVar2 = FUN_140e4a740(&local_c8);
      puVar5 = (undefined4 *)FUN_140e48e40(&local_b8,uVar2);
      FUN_140e609c0(*local_b8);
      if (&local_a8 != puVar5) {
        local_48 = local_a8;
        uStack_44 = uStack_a4;
        uStack_40 = (undefined4)uStack_a0;
        uStack_3c = uStack_a0._4_4_;
        if ((1 << ((byte)puVar5[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_48);
      }
      if ((1 << ((byte)((ulonglong)uStack_a0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140e60910(1);
      local_88 = 0xe;
      uVar3 = local_bc & 0xffffff;
      if (uVar3 == 0) {
LAB_14035ac16:
        local_c8 = local_c8 + 1.0;
      }
      else {
        if (uVar3 == 1) {
          local_c8 = (double)FUN_140e4b060(&local_c8);
          local_bc = 0;
          goto LAB_14035ac16;
        }
        if (uVar3 == 7) {
          local_c8 = (double)CONCAT44(local_c8._4_4_,local_c8._0_4_ + 1);
        }
        else if (uVar3 == 10) {
          local_c8 = (double)((longlong)local_c8 + 1);
        }
        else {
          if (uVar3 == 0xd) {
            local_bc = 0;
            goto LAB_14035ac16;
          }
          FUN_140042910(&DAT_14172c3d8,&local_c8,&local_c8);
        }
      }
    }
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

