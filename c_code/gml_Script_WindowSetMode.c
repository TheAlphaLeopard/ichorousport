// gml_Script_WindowSetMode @ 0x14028d370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_WindowSetMode(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar9;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 **ppuVar10;
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
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_60 = "gml_Script_WindowGetMode";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0x4b;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57e60);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x4d;
  uVar7 = CONCAT44(uVar9,DAT_141a57fc0);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_b8,0,uVar7,0);
  uVar9 = (undefined4)((ulonglong)uVar7 >> 0x20);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    local_58 = 0x4e;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    local_88 = CONCAT44(uRam0000000141dce5cc,_DAT_141dce5c8);
    uStack_80 = uRam0000000141dce5d0;
    uStack_7c = DAT_141dce5d4;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_88);
    local_50 = local_78;
    ppuVar10 = &local_50;
    uVar8 = CONCAT44(uVar9,DAT_141a57f40);
    uVar5 = FUN_140e634e0(param_1,param_2,&local_b8,1,uVar8,ppuVar10);
    cVar3 = FUN_140e491e0(uVar5);
    if (cVar3 == '\0') {
      uStack_7c = 0;
      local_88 = 0;
      puVar6 = &local_88;
      bVar2 = false;
      bVar1 = true;
    }
    else {
      FUN_140e87440(uVar4,DAT_141a57fe0,0x80000000,&local_a8,uVar8 & 0xffffffffffffff00,
                    (ulonglong)ppuVar10 & 0xffffffffffffff00);
      uStack_8c = local_9c;
      uStack_90 = local_a0;
      if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
        local_98 = local_a8;
      }
      else {
        FUN_1400419b0(&local_98,&local_a8);
      }
      puVar6 = &local_98;
    }
    uVar9 = uStack_7c;
    if (puVar6 != param_3) {
      local_48 = *(undefined4 *)puVar6;
      uStack_44 = *(undefined4 *)((longlong)puVar6 + 4);
      uStack_40 = *(undefined4 *)(puVar6 + 1);
      uStack_3c = *(undefined4 *)((longlong)puVar6 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_48);
    }
    if (bVar1) {
      if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
    }
    if ((bVar2) && ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_98);
    }
  }
  else {
    local_58 = 0x4d;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0;
    *param_3 = 0x4000000000000000;
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

