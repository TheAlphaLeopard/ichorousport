// gml_Object_oShatteredShard_Create_0 @ 0x140d6a6f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oShatteredShard_Create_0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  undefined4 uVar7;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 local_48 [16];
  longlong local_38;
  
  local_res18 = 0;
  local_60 = "gml_Script_anon@75@gml_Object_oSharpenStacker_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_58 = 5;
  uVar7 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 7;
  uVar3 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
  FUN_140162d40(uVar3,5);
  local_58 = 8;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a848);
  local_a8 = CONCAT44(uRam0000000141dc76a4,_DAT_141dc76a0);
  uStack_a0 = uRam0000000141dc76a8;
  uStack_9c = uRam0000000141dc76ac;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_a8);
  local_50 = local_78;
  FUN_140e609c0(local_res8);
  puVar5 = (undefined8 *)
           FUN_140e634e0(local_res8,local_res10,&local_98,1,CONCAT44(uVar7,DAT_141a0a0d8),&local_50)
  ;
  uStack_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
  uStack_80 = *(undefined4 *)(puVar5 + 1);
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *puVar5;
  }
  else {
    FUN_1400419b0(&local_88,puVar5);
  }
  local_res18 = 1;
  uStack_9c = 7;
  local_a8 = CONCAT44(local_a8._4_4_,5);
  FUN_140042560(&local_88,&local_a8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (&local_88 != puVar4) {
    local_a8 = local_88;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  FUN_140e60910(1);
  local_58 = 9;
  uStack_9c = 0xf;
  local_a8 = 0x1000000000000ee;
  iVar2 = FUN_140e63cb0(local_48,&local_res8,&local_res10,&local_a8);
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if (0 < iVar2) {
    do {
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7d8);
      local_58 = 0xb;
      uVar3 = (**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7d8);
      uVar6 = (**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a7d8);
      FUN_140e609c0(local_res8);
      FUN_1400460e0(uVar6,uVar3);
      FUN_140e60910(1);
      cVar1 = FUN_140e643f0(local_48,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_48,&local_res8,&local_res10);
  if (local_38 != 0) {
    FUN_140e4cd60();
    local_38 = 0;
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}

