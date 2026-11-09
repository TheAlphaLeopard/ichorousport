// gml_Script_anon_464___InputColorSystem___InputColorSystem @ 0x14006b750

undefined8 *
gml_Script_anon_464___InputColorSystem___InputColorSystem
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  longlong *local_res8;
  undefined8 local_res10;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_88 [48];
  undefined4 local_58 [10];
  undefined4 *local_30;
  
  local_d0 = "gml_Script_anon@584@anon@464@__InputColorSystem@__InputColorSystem";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x13;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x15;
  plVar4 = (longlong *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fed38);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  iVar3 = FUN_140e4a740(param_5);
  if (((*(uint *)((longlong)plVar4 + 0xc) & 0xffffff) == 2) && (lVar1 = *plVar4, lVar1 != 0)) {
    if ((iVar3 < 0) || (*(int *)(lVar1 + 0x24) <= iVar3)) {
      FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar3,
                    *(undefined4 *)(lVar1 + 0x24));
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)((longlong)iVar3 * 0x10 + *(longlong *)(lVar1 + 8));
    }
  }
  else {
    FUN_140e632c0("trying to index variable that is not an array");
  }
  iVar3 = FUN_140e63cb0(local_c0,&local_res8,&local_res10,plVar4);
  if (0 < iVar3) {
    do {
      local_c8 = 0x17;
      if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_e8 = 0;
      local_e0 = 0;
      local_dc = 5;
      uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fec38);
      puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fec28);
      if (puVar6 != local_58) {
        local_a0 = *puVar6;
        uStack_9c = puVar6[1];
        uStack_98 = puVar6[2];
        uStack_94 = puVar6[3];
        if ((1 << ((byte)local_58[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_58);
        }
        FUN_140041b80(local_58,&local_a0);
      }
      local_30 = local_58;
      FUN_140e63610(local_res8,local_res10,&local_e8,1,uVar5,&local_30);
      cVar2 = FUN_140e643f0(local_c0,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_c0,&local_res8,&local_res10);
  if (local_b0 != 0) {
    FUN_140e4cd60();
    local_b0 = 0;
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}

