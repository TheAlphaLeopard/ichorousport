// gml_Object_oBossHoarder_Draw_0 @ 0x14079eec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBossHoarder_Draw_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8 [3];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 *local_50;
  undefined4 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_60 = "gml_Script_anon@3362@gml_Object_oBossHoarder_Other_76";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 0xa5;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_b8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_cc = 0;
  local_d8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0xa7;
  uStack_1c = 0xf;
  local_28 = 0x10000020000000f;
  local_e8 = 0xf;
  uStack_e4 = 0x1000002;
  uStack_e0 = uStack_20;
  uStack_dc = 0xf;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_e8);
  local_50 = local_b8;
  uVar3 = CONCAT44(uVar5,DAT_141a07788);
  FUN_140e634e0(param_1,param_2,&local_d8,1,uVar3,&local_50);
  uVar5 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_58 = 0xa9;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f60d8);
  if (puVar2 != local_b8) {
    local_e8 = *puVar2;
    uStack_e4 = puVar2[1];
    uStack_e0 = puVar2[2];
    uStack_dc = puVar2[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_e8);
  }
  local_50 = local_b8;
  uVar4 = CONCAT44(uVar5,DAT_141a07888);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,uVar4,&local_50);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_58 = 0xaa;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f60d8);
    if (puVar2 != local_a8) {
      local_e8 = *puVar2;
      uStack_e4 = puVar2[1];
      uStack_e0 = puVar2[2];
      uStack_dc = puVar2[3];
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_e8);
    }
    local_48 = local_a8;
    local_e8 = _DAT_1419e8340;
    uStack_e4 = uRam00000001419e8344;
    uStack_e0 = uRam00000001419e8348;
    uStack_dc = uRam00000001419e834c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_e8);
    local_40 = local_98;
    local_e8 = _DAT_1419df7a0;
    uStack_e4 = uRam00000001419df7a4;
    uStack_e0 = uRam00000001419df7a8;
    uStack_dc = uRam00000001419df7ac;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_e8);
    local_38 = local_88;
    local_e8 = _DAT_1419e8350;
    uStack_e4 = uRam00000001419e8354;
    uStack_e0 = uRam00000001419e8358;
    uStack_dc = uRam00000001419e835c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_e8);
    local_30 = local_78;
    FUN_140e634e0(param_1,param_2,&local_c8,4,CONCAT44(uVar5,DAT_141a0a2e8),&local_48);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

